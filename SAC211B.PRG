MEMVAR getlist
*******************************
* ULTIMO NUMERO DA NOTA FISCAL
*******************************
FUNCTION sac211B(mtipo_nf)
***************
LOCAL MPRG:='SAC211B',mmodulo:='ULTIMO NUMERO DA NOTA FISCAL (ALTERACAO) ['+mtipo_nf+']',mnumero,m_numero

op_tela(10,10,12,50,mmodulo)
WHILE .T.
        m_numero := {}
        IF mtipo_nf = 'NF'
                sr_getconnection():exec("SELECT numero FROM sacnota WHERE SR_RECNO = '1'",,.t.,@m_numero)
        ELSE
                sr_getconnection():exec("SELECT numero FROM sacnonfc WHERE SR_RECNO = '1'",,.t.,@m_numero)
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(m_numero) = 0
                mnumero := 0
        ELSE
                mnumero := VAL(m_numero[1,1])
        ENDIF
        DEVPOS(01,00);DEVOUT('Ultimo No.da Nota:')
        @ 01,COL()+1 GET mnumero PICT '999999'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF STRZERO(mnumero,6) <> m_numero[1,1]
                IF ! aut_sen('LIBERACAO DA ALTERACAO NO NUMERO NOTA FISCAL:','LIB_N_NOTA')
                        LOOP
                ENDIF
                IF mtipo_nf = 'NF'
                        sr_getconnection():exec("UPDATE sacnota SET numero = " + sr_cdbvalue(STRZERO(mnumero,6)) + " WHERE sr_recno = 1 ",,.f.)
                ELSE
                        sr_getconnection():exec("UPDATE sacnonfc SET numero = " + sr_cdbvalue(STRZERO(mnumero,6)) + " WHERE sr_recno = 1 ",,.f.)
                ENDIF
                sr_getconnection():exec("COMMIT",,.f.)
                EXIT                
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** FIM ***************************

