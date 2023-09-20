***************************** F I M ****************************************
* TECLADO PARA DIGITAR NUMEROS PIN-PAD
**************************************
FUNCTION pinpad(msen,mdescricao,mmensag,mop_obs,m_descri,mconf,ncampo,mtitulo)
************************************************
LOCAL mprg:='HTIFUN',nPBpinpad:={},mcont:=0,mlinha:=0,cmacro
PRIVATE mdigitado := '',mnum:=' ',mOK := 0,mvisual := '',msenha,mconfirma:='',mcampo

mcampo := ncampo
msenha := msen
op_tela(02,00,50,90,memp_resa+'-CNPJ:'+mcgc_firm+SPACE(6)+sistema+' - '+mversao+SPACE(6)+'Data: '+DTOC(mdata_sis)+' - '+ver_dia(mdata_sis),,1)
//WVW_DrawImage( ,40,52,45,89,ALLTRIM(m_indiv[1,3])+'rodape.JPG',.F.,.F.)
setcor(4)
limpa(00,00,50,90)
setcor(1)
botao(01,1,7,41)
DrawLabel(01,2,mdescricao,m_color[10],, "Arial Black",30,8)

botao(01,50,3,80)
DrawLabel(01,50,mtitulo,m_color[10],, "Arial Black",30,8)


IF mmensag # NIL
        mensagem(mmensag)
ENDIF

nPBpinpad:={}
i:=0
FOR i = 1 TO 15
        AADD(nPBpinpad,0)
NEXT
SET CURSOR OFF
IF m_descri # NIL .AND. LEN(m_descri) > 0
        IF SUBSTR(m_descri[1],1,1) = '*'
                mlinha := 12
        ELSE
                mlinha := 3
        ENDIF
        i:=0
        FOR i = 1 TO LEN(m_descri)
                IF SUBSTR(m_descri[i],1,1) = '*'
                        cmacro :=SUBSTR(m_descri[i],2)
                        &(cmacro)
                ELSE
                        //setcor(3)
                        DEVPOS(i+mlinha,51);DEVOUT(m_descri[i])
                ENDIF
        NEXT
ENDIF
IF EMPTY(m_cfg[6])
        WVW_PBSetFont( , 'Arial Black',60,18 )
ELSE
        WVW_PBSetFont( , 'Arial Black',45,15 )
ENDIF
nPBpinpad[1] := wvw_pbCreate(NIL, 9, 1,15,13,  ' 1 ',NIL,{||pin_pad('1') })
nPBpinpad[2] := wvw_pbCreate(NIL, 9,15,15,27,  ' 2 ',NIL,{||pin_pad('2') })
nPBpinpad[3] := wvw_pbCreate(NIL, 9,29,15,41,  ' 3 ',NIL,{||pin_pad('3') })
nPBpinpad[4] := wvw_pbCreate(NIL,17,1,23,13,   ' 4 ',NIL,{||pin_pad('4') })
nPBpinpad[5] := wvw_pbCreate(NIL,17,15,23,27, ' 5 ',NIL,{||pin_pad('5') })
nPBpinpad[6] := wvw_pbCreate(NIL,17,29,23,41, ' 6 ',NIL,{||pin_pad('6') })
nPBpinpad[7] := wvw_pbCreate(NIL,25,1,31,13,  ' 7 ',NIL,{||pin_pad('7') })
nPBpinpad[8] := wvw_pbCreate(NIL,25,15,31,27, ' 8 ',NIL,{||pin_pad('8') })
nPBpinpad[9] := wvw_pbCreate(NIL,25,29,31,41, ' 9 ',NIL,{||pin_pad('9') })
nPBpinpad[10]:= wvw_pbCreate(NIL,33,1,39,13,  ' 0 ',NIL,{||pin_pad('0')})
nPBpinpad[11] := wvw_pbCreate(NIL,33,15,39,27,' , ',NIL,{||pin_pad('.') })
nPBpinpad[12] := wvw_pbCreate(NIL,33,29,39,41,' ENTER ',NIL,{||pin_pad('OK') })
nPBpinpad[13]:= wvw_pbCreate(NIL,41,1,47,13,  ' LIMPA ',NIL,{||pin_pad('LIMPA')})
nPBpinpad[14] := wvw_pbCreate(NIL,41,15,47,27,'CANC.',NIL,{||pin_pad('CANCEL') })
nPBpinpad[15] := wvw_pbCreate(NIL,41,29,47,41,' - ',NIL,{||pin_pad('-')})
mcont:=0
mconfirma := mconf
IF mconf # NIL
        mcont:=15
        i:=0
        FOR i = 1 TO mcont
                WVW_PBEnable( NIL, nPBpinpad[i], .F. )
        NEXT
        WVW_PBEnable( NIL, nPBpinpad[1], .T. )
        WVW_PBEnable( NIL, nPBpinpad[2], .T. )
        WVW_PBEnable( NIL, nPBpinpad[12], .T. )
        WVW_PBEnable( NIL, nPBpinpad[13], .T. )
ELSE
        mcont:=15
        i:=0
        FOR i = 1 TO mcont
                WVW_PBEnable( NIL, nPBpinpad[i], .T. )
        NEXT
ENDIF
mok:=0
mnum:=' '
WHILE .T.
        botao(4,2,6,35)
        IF msenha = NIL
                WVW_DrawLabel(,4,3,mdigitado,,,,, 'Arial Black',30,15,,,,,)
        ELSE
                WVW_DrawLabel(,4,3,mvisual,,,,, 'Arial Black',30,15,,,,,)
        ENDIF
        //@ 42,1 GET mnum PICT '@!'       //VALID mnum $ '1234567890,.OLC- QWERTYUIOPASDFGHJKLZXCVBNM'
        mnum := INKEY(110,2500)

        //READ
        IF LASTKEY() = 7 .OR. LASTKEY() = 8
                mdigitado := ' '
                mvisual := ' '
                LOOP
        ENDIF
        //IF ncampo # NIL .AND. LEN(mdigitado) = ncampo
        IF LEN(mdigitado) = ncampo .AND. ncampo # NIL
                i:=0
                FOR i= 1 TO 15
                        WVW_PBDestroy(,nPBpinpad[i])
                NEXT
                SET CURSOR ON
                //fecha_tela()
                RETURN mdigitado
        ENDIF
        IF mok = 1 .OR. LASTKEY() = 13 .OR. mnum = '='
                i:=0
                FOR i= 1 TO 15
                        WVW_PBDestroy(,nPBpinpad[i])
                NEXT
                SET CURSOR ON
                //fecha_tela()
                RETURN mdigitado
        ENDIF
        /*
        IF LEN(mdigitado) = 10
                atencao('Quantidade de Digito acima do permitido...')
                LOOP
        ENDIF
        */
        //atencao(CHR(LASTKEY()))
        mdigitado := mdigitado + CHR(mnum)
        mvisual := mvisual + '#'


        /*
        IF mnum = '1'
                mdigitado := mdigitado + '1'
                mvisual := mvisual + '#'
        ELSEIF mnum = '2'
                mdigitado := mdigitado + '2'
                mvisual := mvisual + '#'
        ELSEIF mnum = '3'
                mdigitado := mdigitado + '3'
                mvisual := mvisual + '#'
        ELSEIF mnum = '4'
                mdigitado := mdigitado + '4'
                mvisual := mvisual + '#'
        ELSEIF mnum = '5'
                mdigitado := mdigitado + '5'
                mvisual := mvisual + '#'
        ELSEIF mnum = '6'
                mdigitado := mdigitado + '6'
                mvisual := mvisual + '#'
        ELSEIF mnum = '7'
                mdigitado := mdigitado + '7'
                mvisual := mvisual + '#'
        ELSEIF mnum = '8'
                mdigitado := mdigitado + '8'
                mvisual := mvisual + '#'
        ELSEIF mnum = '9'
                mdigitado := mdigitado + '9'
                mvisual := mvisual + '#'
        ELSEIF mnum = '0'
                mdigitado := mdigitado + '0'
                mvisual := mvisual + '#'
        ELSEIF mnum = ','
                mdigitado := mdigitado + '.'
                mvisual := mvisual + '#'
        ELSEIF mnum = '-'
                mdigitado := mdigitado + '-'
                mvisual := mvisual + '#'
        ELSEIF mnum = '.'
                mdigitado := mdigitado + '.'
                mvisual := mvisual + '#'
        //ELSEIF mnum = 'l' .OR. mnum = 'L'
        //        mdigitado := ''
        //        mvisual := ''
        ELSEIF mnum = 'o' .OR. mnum = 'O'
                inserir_obs()
        ELSE
                mdigitado := mdigitado + mnum
                mvisual := mvisual + '#'

        //ELSEIF mnum = 'C' .OR. mnum = 'c' .OR. mnum = '999999'
                //wvw_lclosewindow()
        //        SET CURSOR ON
        //        RETURN 'CANCEL'

        ENDIF
        */
        mnum:=' '
        //KEYBOARD CHR(28)
        //CLEAR TYPEAHEAD
        IF LASTKEY() = 27
                SET CURSOR ON
                //fecha_tela()
                RETURN ''
        ENDIF
ENDDO
RETURN .T.
*********************************  F I M *************************************
FUNCTION pin_pad(mnumero)
*************************
IF ! mnumero $ ',.1234567890LIMPAOKCANCELOBSRET-QWERTYUIOPASDFGHJKLZXCVBNM'
        RETURN .F.
ENDIF
IF mnumero = ','
        mnumero := '.'
ENDIF
IF (mnumero = '1' .OR. mnumero = '2') .AND. mconfirma # NIL
        mdigitado := mdigitado + mnumero
        mvisual := mvisual + '#'
        mok:=1
        KEYBOARD CHR(13)
        mnum:=' '
        RETURN .T.
ENDIF
IF mnumero = 'CANCEL'
        mok:=1
        mdigitado := ''
        mvisual := ''
        mnum := '999999'
        KEYBOARD CHR(27)
        RETURN .T.
ELSEIF mnumero # 'OK'
        mdigitado := mdigitado + mnumero
        mvisual := mvisual + '#'
        //atencao(strzero(LEN(mdigitado),5)+' - '+mdigitado)
        IF mcampo # NIL .AND. LEN(mdigitado) = mcampo
                mok:=1
                KEYBOARD CHR(13)
                mnum:=' '
                RETURN mdigitado
        ENDIF
ELSEIF mnumero = 'OK'
        mok:=1
        KEYBOARD CHR(13)
        mnum:=' '
        RETURN .T.
ENDIF
IF mnumero = 'LIMPA'
        mdigitado := ''
        mvisual := ''
ENDIF
botao(4,2,6,35)
IF msenha = NIL
        WVW_DrawLabel(,4,3,mdigitado,,,,, 'Arial Black',30,15,,,,,)
ELSE
        WVW_DrawLabel(,4,3,mvisual,,,,, 'Arial Black',30,15,,,,,)
ENDIF
mnum:=' '
RETURN .T.
*********************************  F I M *************************************
