****************************************
* MAQUINA DE CALCULAR
****************************************
FUNCTION maqcalc
****************
     LOCAL tela_c:=SAVESCREEN(0,0,24,79),rola_calc:=.f.,gcr:=CHR(17)+CHR(217),;
           poe_calc:=.t., cur_sor:=SETCURSOR(2),getlist:={},xlinsc,xcolsc,fgint:=.f.,ult_tk

     PRIV  sinal_:=" ", num_disp, fgpaste,cor_calc:=SETCOLOR(),;
           lisu_:=1, cosu_:=40, sinal_ant:=" ", nu_calc:=0.00

*    fgpaste := IF((!EMPT(READVAR()).AND.LEFT(READVAR(),2)="R_"),.t.,.F.)
     fgpaste := .t.
     ult_tk=LASTKEY()
     SETKEY(ult_tk,NIL)                        
     SETKEY(35 ,{||sinal_dig()})             
     SETKEY(36 ,{||sinal_dig()})             
     SETKEY(37 ,{||sinal_dig()})             
     SETKEY(42 ,{||sinal_dig()})             
     SETKEY(43 ,{||sinal_dig()})             
     SETKEY(45 ,{||sinal_dig()})             
     SETKEY(47 ,{||sinal_dig()})             
     SETKEY(61 ,{||sinal_dig()})             
     SETKEY(94 ,{||sinal_dig()})             
     SETKEY(99 ,{||sinal_dig()})             
     SETKEY(67 ,{||sinal_dig()})             
     IF fgpaste
          SETKEY(82 ,{||sinal_dig()})        
          SETKEY(114,{||sinal_dig()})        
          SETKEY(83 ,{||sinal_dig()})
          SETKEY(115,{||sinal_dig()})
     ENDI
     SETKEY(-39,{||sinal_dig()})        
     xlinsc:=xcolsc:=05
     DO WHIL .t.
          IF poe_calc                        
               setcor(1)
               botao(xlinsc,xcolsc,xlinsc+17,xcolsc+26)
               botao(xlinsc+1,xcolsc+2,xlinsc+4,xcolsc+23)
               botao(xlinsc+5,xcolsc+1,xlinsc+7,xcolsc+5)
               botao(xlinsc+5,xcolsc+6,xlinsc+7,xcolsc+10)
               botao(xlinsc+5,xcolsc+11,xlinsc+7,xcolsc+15)
               botao(xlinsc+5,xcolsc+16,xlinsc+7,xcolsc+18)
               botao(xlinsc+5,xcolsc+19,xlinsc+7,xcolsc+21)
               botao(xlinsc+5,xcolsc+22,xlinsc+7,xcolsc+24)

               botao(xlinsc+8,xcolsc+1,xlinsc+10,xcolsc+5)
               botao(xlinsc+8,xcolsc+6,xlinsc+10,xcolsc+10)
               botao(xlinsc+8,xcolsc+11,xlinsc+10,xcolsc+15)
               botao(xlinsc+8,xcolsc+16,xlinsc+10,xcolsc+18)
               botao(xlinsc+8,xcolsc+19,xlinsc+10,xcolsc+21)
               botao(xlinsc+8,xcolsc+22,xlinsc+10,xcolsc+24)

               botao(xlinsc+11,xcolsc+1,xlinsc+13,xcolsc+5)
               botao(xlinsc+11,xcolsc+6,xlinsc+13,xcolsc+10)
               botao(xlinsc+11,xcolsc+11,xlinsc+13,xcolsc+15)
               botao(xlinsc+11,xcolsc+16,xlinsc+13,xcolsc+18)
               botao(xlinsc+11,xcolsc+19,xlinsc+13,xcolsc+21)
               botao(xlinsc+11,xcolsc+22,xlinsc+13,xcolsc+24)

               botao(xlinsc+14,xcolsc+1,xlinsc+16,xcolsc+5)
               botao(xlinsc+14,xcolsc+6,xlinsc+16,xcolsc+10)
               botao(xlinsc+14,xcolsc+11,xlinsc+16,xcolsc+15)
               botao(xlinsc+14,xcolsc+16,xlinsc+16,xcolsc+18)
               botao(xlinsc+14,xcolsc+19,xlinsc+16,xcolsc+21)
               @ xlinsc+17,xcolsc+2 SAY IF(fgpaste,"[R]esultado  [S]air","")
               setcor(3)
               @ xlinsc+17,xcolsc+2 SAY IF(fgpaste,"[R]","")
               @ xlinsc+17,xcolsc+15 SAY IF(fgpaste,"[S]","")
               @ xlinsc+6 ,xcolsc+3 say "7"
               @ xlinsc+6 ,xcolsc+8 say "8"
               @ xlinsc+6 ,xcolsc+13 say "9"
               @ xlinsc+6 ,xcolsc+17 say "/"
               @ xlinsc+6 ,xcolsc+20 say "%"
               @ xlinsc+6 ,xcolsc+23 say "C"
               @ xlinsc+9 ,xcolsc+3 say "4"
               @ xlinsc+9 ,xcolsc+8 say "5"
               @ xlinsc+9 ,xcolsc+13 say "6"
               @ xlinsc+9 ,xcolsc+17 say "*"
               @ xlinsc+9 ,xcolsc+20 say " "
               @ xlinsc+9 ,xcolsc+23 say "R"
               @ xlinsc+12 ,xcolsc+3 say "1"
               @ xlinsc+12 ,xcolsc+8 say "2"
               @ xlinsc+12 ,xcolsc+13 say "3"
               @ xlinsc+12 ,xcolsc+17 say "-"
               @ xlinsc+12 ,xcolsc+20 say "#"
               @ xlinsc+12 ,xcolsc+23 say "$"
               @ xlinsc+15 ,xcolsc+3 say "0"
               @ xlinsc+15 ,xcolsc+8 say "."
               @ xlinsc+15 ,xcolsc+12 say gcr
               @ xlinsc+15 ,xcolsc+17 say '+'
               @ xlinsc+15 ,xcolsc+20 say '='
               setcor(1)
               poe_calc=.f.
          ENDI
          gab=IF(fgint,"   999999999999999",;                       
                       "999999999999999.99")

          num_disp=0.00                                             
          setcor(3)
          @ xlinsc+2,xcolsc+4 SAY "="
          @ xlinsc+2,xcolsc+5 GET nu_calc PICT gab                    
          setcor(1)
          CLEAR GETS
          @ xlinsc+3,xcolsc+4 SAY sinal_ant
          @ xlinsc+3,xcolsc+5 GET num_disp PICT gab                   
          READ
          DO CASE
               CASE sinal_="R"
                        READINSERT(.T.)
                        KEYB CHR(1)+"0.00"+CHR(1)+ALLTRIM(TRAN(nu_calc,gab))
                        EXIT
               CASE sinal_="S"
*              CASE LASTKEY()=27
                        READINSERT(.T.)
                        KEYB CHR(1)     //+"0.00"+CHR(1)+ALLTRIM(TRAN(nu_calc,gab))
                        EXIT
               CASE sinal_= "AF8"                                     
                    MOV_MENU(@xlinsc,@xcolsc,26,16,tela_c)              
                    rola_calc:=poe_calc:=.t.; sinal_=" "
               CASE sinal_="$"                                      
                    fgint=(!fgint); sinal_=" "
               CASE sinal_="C"                                      
                    nu_calc=0; sinal_=" "
               CASE sinal_="#"                                      
                    IF !EMPTY(num_disp)                             
                         IF sinal_ant="-"                           
                              nu_calc-=SQRT(num_disp)               
                         ELSE                                       
                              nu_calc+=SQRT(num_disp)               
                         ENDI
                    ELSE                                            
                         nu_calc=SQRT(nu_calc)                      
                    ENDI                                            
                    sinal_=" "
               CASE sinal_="%"
                    IF sinal_ant="-"
                        nu_calc-=nu_calc/100*num_disp           
                    ELSEIF sinal_ant="+"
                        nu_calc+=nu_calc/100*num_disp
                    ELSE
                        nu_calc=nu_calc/100*num_disp
                    ENDIF
                    sinal_=" "
               OTHERWISE
                    DO CASE
                         CASE sinal_ant="-"                         
                              nu_calc-=num_disp
                         CASE sinal_ant="*"                         
                              nu_calc=nu_calc*num_disp
                         CASE sinal_ant="/"                         
                              nu_calc=nu_calc/num_disp
                         CASE sinal_ant=" "                         
                              nu_calc=nu_calc^num_disp
                         OTHERWISE                                  
                              nu_calc+=num_disp
               ENDC
          ENDC
          sinal_=IF(sinal_="="," ",sinal_)                          
          sinal_ant=sinal_; sinal_=" "                              
     ENDD
/*
     IF rola_calc                                                   
          SAVE TO (arqcon) ALL LIKE x*                           
     ENDI
*/
     SETCOLOR(cor_calc)                                             
     SETCURSOR(cur_sor)                                             
     SETKEY(35,NIL); SETKEY(36,NIL)                                 
     SETKEY(37,NIL); SETKEY(42,NIL)                                 
     SETKEY(43,NIL); SETKEY(45,NIL)                                 
     SETKEY(47,NIL); SETKEY(67,NIL)
     SETKEY(94,NIL); SETKEY(99,NIL)
     SETKEY(82,NIL); SETKEY(114,NIL)
     SETKEY(83,NIL); SETKEY(115,NIL)
     SETKEY(61,NIL); SETKEY(-39,NIL)
     SET KEY ult_tk to maqcalc  
     RESTSCREEN(0,0,24,79,tela_c)                                   
     SETCOLOR(cor_calc)
     RETURN NIL

     FUNCTION sinal_dig
     sinal_=IF(LASTKEY()=-39,"AF8",;                           
            UPPER(CHR(LASTKEY())))                                  
     KEYB CHR(13)                                              
RETU
*************************************************
FUNC mov_menu(xlinsc,xcolsc,tc,tl,tel)
***************************************
LOCAL lins, cols, lin, col, tela, tec

lins:=xlinsc
cols:=xcolsc
lini:=lins+tl+1
coli:=cols+tc
tela:=SAVESCREEN(lins,cols,lini,coli)
DO WHILE .T.
    @ 24,00 SAY PADC("Utilize as setas para posicionar a janela. ("+CHR(17)+CHR(217)+" aceita posi‡„o)",80)
    tec=INKEY(0)
    DO CASE
        CASE tec = 5
            IF lins = 0
                LOOP
            ENDIF
            lins=lins -1
            lini=lini -1
        CASE tec = 24
            IF lini = 23
                LOOP
            ENDIF
            lins=lins +1
            lini=lini +1
        CASE tec = 4
            IF coli = 78
                LOOP
            ENDIF
            cols=cols +1
            coli=coli +1
        CASE tec = 19
            IF cols = 0
                LOOP
            ENDIF
            cols=cols -1
            coli=coli -1
        CASE tec = 27
            EXIT
        CASE tec = 13
            EXIT
    ENDCASE
    RESTSCREEN(0,0,24,79,tel)
    RESTSCREEN(lins,cols,lini,coli,tela)
ENDDO
xlinsc:=lins
xcolsc:=cols
RESTSCREEN(0,0,24,79,tel)
KEYB CHR(13)
RETURN(0)
*************************************************
PROCEDURE CAIXA1(moldura,ls,cs,li,ci,sombra,som)
/*
        CAIXA1() = abre uma janela na tela
        moldura = moldura usada para montar a janela
        ls,cs   = coordenadas superiores da janela
        li,ci   = coordenadas inferiores da janela
        sombra  = expressao logica, indica se projetara sombra
                  sobre a tela
        som     = se "som" for informado, apos a montagem da tela
                  sera' produzido um "beep" com frequencia igual a "som"
*/
LOCAL vtela,cor_a:=SETCOLOR(), i:=j:=k:=w:=x:=0, iouj:=1, fim:=.f.
vtela:=SAVESCREEN(ls+1,cs+1,li+1,ci+2)
som = IF( VALTYPE( som ) = "U", 0, som)
moldura = IF( VALTYPE( moldura ) = "U", "ÚÄ¿³ÙÄÀ³",LEFT(moldura,8))
sombra = IF( VALTYPE( sombra ) = "U", .t., sombra)
IF sombra
    IF LEN(vtela)>3192  //2048
       vtela:=TRANSFORM(SUBSTR(vtela,1,2048),REPLICATE("X"+CHR(8),1000))+;
              TRANSFORM(SUBSTR(vtela,2049),REPLICATE("X"+CHR(8),1000))
    ELSE     
       vtela:=TRANSFORM(vtela,REPLICATE("X"+CHR(8),LEN(vtela)/2))
    ENDIF
ENDIF
i:=INT((li-ls)/2+ls)
j:=INT((ci-cs)/2+cs)
k:=i
w:=j+1
IF i<j
   iouj:=1
ELSE
   iouj:=2
ENDIF
fim=.f.
DO WHILE .t.
   IF iouj=1
     IF j=cs
        fim=.T.
     ENDIF
   ELSE
     IF i=ls
        fim=.T.
     ENDIF
   ENDIF 
   IF fim
     RESTSCREEN(ls+1,cs+1,li+1,ci+2,vtela)
     @ ls,cs,li,ci BOX moldura+" "
     EXIT
   ELSE 
     @ i,j,k,w BOX moldura+" "
     IF i!=ls
          i--
     ELSE
          i=ls
     ENDIF
     IF j>cs
          j--
     ELSE
          j=cs
     ENDIF
     IF k!=li
          k++
     ELSE
          k=li
     ENDIF
     IF w<ci
          w++
     ELSE
          w=ci
     ENDIF
   ENDIF
ENDDO
IF som!=0
  TONE(som)
ENDIF
SETCOLOR(cor_a)
RETURN

/*
 Funcoes utilizadas
*/
FUNCTION CBC()

setcor(1)
FUNDO("On Line           Clipper",1,23)
@ 00,00 SAY REPL(" ",80)
@ 00,00 SAY PADC("Exemplo de como utilizar a rotina: "+v_rotina,80)
@ 24,00 SAY REPL(" ",80)
@ 24,62 say "³ Clipper On Line "
RETURN
*************************************************
FUNC S_R_TELA(sav_rest)
/*
    S_R_TELA() = esta funcao salva e restaura a tela salva.
        
        sav_rest = se igual a:
                            
                            1 - salva a tela
                            
                            2 - restaura a tela salva em "sav_rest" igual a 1
*/
LOCAL tel:=lin:=col:=0,i,t
arqtel="TELAS.SYS"
IF sav_rest=1
    FOR i = 1 TO 8
        lin:=0
        FOR t = 1 TO 5
            tx:="t_"+ALLTRIM(STR(t+tel))
            &tx.=SAVESCREEN(lin,col,lin+4,col+9)
            lin+=5
        NEXT
        col+=10
        tel+=5
    NEXT
    SAVE TO (arqtel) ALL LIKE t_*
ELSE
    RESTORE FROM (arqtel) ADDI
    FOR i = 1 TO 40
        lin:=VAL(SUBST("051015052020001000101000052005151505200015"+;
                       "15002000102000151020051520151010050005",i*2-1,2))
        col:=VAL(SUBST("305030001060501010703070404010500050704020"+;
                       "60200060205000700020701030404060603020",i*2-1,2))
        tel:=VAL(SUBST("172819 2103526 8 63818362225 729 427402114"+;
                       "3411 5311330 139 31537 920242333321612",i*2-1,2))
        tx="t_"+ALLTRIM(STR(tel))
        RESTSCREEN(lin,col,lin+4,col+9,&tx.)
        TONE(27.50,2)
    NEXT
ENDIF
RETURN(NIL)
*************************************************
FUNC FUNDO(cTexto,nLini,nLinf)
LOCAL tf:=ARRAY(25),fundo,FUN_DO
*
*  Monta papel de parede
IF PCOUNT()=1
   nLini:=0
   nLinf:=24
ELSEIF PCOUNT()=3
   nLinf=IF(nLinf>24,24,nLinf)
ELSE
   cTexto=IF(VALTYPE(cTexto)="U",1,cTexto)
   nLini  =IF(VALTYPE(nLini)="U",0,nLini)
   nLinf  =IF(VALTYPE(nLinf)="U",24,nLinf)
ENDIF
IF VALTYPE(cTexto)="N"
   cTexto=IF(cTexto>25,25,cTexto)
ENDIF
tf[1]="°°°°°°°°°°±±±±±±±±±²²²²²²²²²²±±±±±±±±±±"
tf[2]="°°°°°°°°°°±±±±±±±±±°°°°°°°°°°²²²²²²²²²²"
tf[3]="²²²²²²²²²²°°°°°°°°°²²²²²²²²²²±±±±±±±±±±"
tf[4]="²²²²²²²²²²         °°°°°°°°°°±±±±±±±±±±"
tf[5]="°"
tf[6]="±"
tf[7]="²"
tf[8]=" "
tf[9]=" "
tf[10]=" "
tf[11]=" "
tf[12]=" "
tf[13]=""
tf[14]="Ä"
tf[15]=" "
tf[16]="ð"
tf[17]="Å"
tf[18]="Î"
tf[19]="Þ"
tf[20]="* "
tf[21]="À¿À¿"
tf[22]="ÊËËÊ"
tf[23]="ÁÂÂÁ"
tf[24]="Ã´´Ã"
tf[25]="¹ÌÌ¹"
IF VALTYPE(cTexto)="C"
   FUN_DO=SUBST(cTexto+REPLIC(" ",50),1,50)    //50 caracteres
   fundo=1
ELSE
   FUN_DO=tf[cTexto]
   fundo=cTexto
ENDIF
IF fundo<21
   FUN_DO=SUBS(FUN_DO+REPL(FUN_DO,(80*nLinf)/LEN(FUN_DO)),1,(80*nLinf))
ENDIF
FOR F=nLini TO nLinf
   IF fundo<21
      @ F,00 SAY SUBS(FUN_DO,F*80-79,80)
   ELSE
      @ F,00 SAY REPL(SUBS(FUN_DO,1,2),40)
      FUN_DO=SUBS(FUN_DO,3)+SUBS(FUN_DO,1,2)
   ENDIF
NEXT
RETURN .T.
*************************************************
FUNCTION TEXTO1(vexec,vprog,vtlin,vtex)
LOCAL Local1:= SAVESCREEN(0, 0, 24, 79), Local2:= mcol:= 0, ;
      Local3:= 1, Local4:= {}, Local5:= 8, Local6:= .F.
SETCURSOR(0)
vlini:= INT((24 - (7 + vtlin)) / 2)
vlinf:= vlini + vtlin + 6
setcor(1)
CAIXA1(xmold, vlini, 5, vlinf, 74, .T.)
@ vlinf - 3,  5 SAY "Ã" + Replicate("Ä", 68) + "´"

IF vexec
 @ vlinf - 2,  8 SAY "   Texto   "
 @ vlinf - 2, 22 SAY "  Exemplo  "
 @ vlinf - 2, 36 SAY "  Executa  "
 SETCOLOR("N/BG")
 @ vlinf - 2, 19 SAY "Ü"
 @ vlinf - 1,  9 SAY Replicate("ß", 11)
 @ vlinf - 2, 33 SAY "Ü"
 @ vlinf - 1, 23 SAY Replicate("ß", 11)
 @ vlinf - 2, 47 SAY "Ü"
 @ vlinf - 1, 37 SAY Replicate("ß", 11)
 Local4:= {"   Texto   ","  Exemplo  ","  Executa  "}
ELSE
 @ vlinf - 2,  8 SAY "   Texto   "
 @ vlinf - 2, 22 SAY "  Exemplo  "
 SETCOLOR("N/BG")
 @ vlinf - 2, 19 SAY "Ü"
 @ vlinf - 1,  9 SAY Replicate("ß", 11)
 @ vlinf - 2, 33 SAY "Ü"
 @ vlinf - 1, 23 SAY Replicate("ß", 11)
 Local4:= {"   Texto   ","  Exemplo  "}
ENDIF
telm:= SAVESCREEN(vlinf - 2, 6, vlinf - 2, 73)
v_tex:=MEMOREAD(vtex)
DO WHILE (.T.)
   SETCOLOR("W+/BG")
   @ 24,  1 SAY "  "
   @ 24, 27 SAY "ESC "
   SETCOLOR("N/BG")
   @ 24,  5 SAY " Movimenta o Texto"
   @ 24, 31 SAY " Menu                         "
   SETCOLOR("W+/BG")
   @ vlini,  5, vlinf - 3, 74 box "ÚÄ¿³´ÄÃ³"
   setcor(1)
   MEMOEDIT(v_tex, vlini + 1, 6, vlinf - 4, 73, .F.)
   @ vlini,  5, vlinf - 3, 74 BOX "ÚÄ¿³´ÄÃ³"
   SETCOLOR("W+/BG")
   @ vlinf - 3,  5, vlinf, 74 BOX "ÃÄ´³ÙÄÀ³"
   SETCOLOR("W+/BG")
   @ 24,  1 SAY CHR(27)+' '+CHR(26)
   @ 24, 27 SAY "ESC "
   SETCOLOR("N/BG")
   @ 24,  5 SAY " Seleciona a Op‡„o"
   @ 24, 31 SAY " Sair                         "
   DO WHILE (.T.)
      RESTSCREEN(vlinf - 2, 6, vlinf - 2, 73, telm)
      SETCOLOR("N/W")
      @ vlinf - 2, Local5 SAY "" + SUBSTR(Local4[Local3], 2,9) + ""
      tm:= INKEY(0)
      DO CASE
      CASE tm = -1
         maqcalc()
      CASE tm = -2
         calend()
      CASE tm = -3
         sleep()
      CASE tm = 4
         Local3:= Local3 + 1
         Local5:= Local5 + 14
         IF vexec
            IF (Local3 > 3)
               Local3:= 3
               Local5:= Local5 - 14
            ENDIF
         ELSEIF (Local3 > 2)
            Local3:= 2
            Local5:= Local5 - 14
         ENDIF
      CASE tm = 19
         Local3:= Local3 - 1
         Local5:= Local5 - 14
         IF (Local3 < 1)
            Local3:= 1
            Local5:= 8
         ENDIF
      CASE tm = 27
         EXIT
      CASE tm = 13
         RESTSCREEN(vlinf - 2, 6, vlinf - 2, 73, telm)
         DO CASE
         CASE Local3 == 1
            setcor(1)
            @ vlinf - 3,  5, vlinf, 74 BOX "ÃÄ´³ÙÄÀ³"
            EXIT
         CASE Local3 == 2
            SETCOLOR("W+/BG")
            @ 24,  1 SAY "  "
            @ 24, 27 SAY "ESC "
            SETCOLOR("N/BG")
            @ 24,  5 SAY " Movimenta o Texto"
            @ 24, 31 SAY " Menu                         "
            setcor(1)
            @ vlinf - 3,  5, vlinf, 74 BOX "ÃÄ´³ÙÄÀ³"
            tprg:= MEMOREAD(vprog+".PRG")
            SETCOLOR("W+/BG")
            @ vlini,  5, vlinf - 3, 74 BOX "ÚÄ¿³´ÄÃ³"
            setcor(1)
            MEMOEDIT(tprg, vlini + 1, 6, vlinf - 4, 73, .F.)
            @ vlini,  5, vlinf - 3, 74 BOX "ÚÄ¿³´ÄÃ³"
            SETCOLOR("W+/BG")
            @ vlinf - 3,  5, vlinf, 74 BOX "ÃÄ´³ÙÄÀ³"
            SETCOLOR("W+/BG")
            @ 24,  1 SAY CHR(27)+' '+CHR(26)
            @ 24, 27 SAY "ESC "
            SETCOLOR("N/BG")
            @ 24,  5 SAY " Seleciona a Op‡„o"
            @ 24, 31 SAY " Sair                         "
         CASE Local3 == 3
            &vprog()
         ENDCASE
      ENDCASE
   ENDDO
   IF (LASTKEY() = 27)
      EXIT
   ENDIF
ENDDO
RESTSCREEN(0, 0, 24, 79, Local1)
SETCURSOR(1)
RETURN
*************************************************
PROCEDURE Calend

PARAMETERS p, l, v

SET DATE BRIT
pop_row = ROW()
pop_col = COL()
in_date = DATE()
in_mont = MONTH(in_date)
in_year = YEAR(in_date)
in_day = DAY(DATE())
cur_col = IF(COL() <= 35, 45, 1)
cur_lin = 01
calend_scr = SAVESCREEN(0,0,24,79)
old_color = SETCOLOR()
SET CURSOR OFF
SET CENTURY ON
DO WHILE .T.
        setcor(1)
        botao(cur_lin,cur_col,cur_lin+11,cur_col+28)
        @ cur_lin+3,cur_col+1 SAY "Dom Seg Ter Qua Qui Sex Sab"
        @ cur_lin+2,cur_col+1 TO cur_lin+2,cur_col+27
        @ cur_lin+4,cur_col+1 TO cur_lin+4,cur_col+27
/*
   CAIXA1("       ",cur_lin,cur_col,cur_lin+11,cur_col+28,.t.)
   @ cur_lin  ,cur_col SAY "ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»"
   @ cur_lin+1,cur_col SAY "º                           º"
   @ cur_lin+2,cur_col SAY "ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶"
   @ cur_lin+3,cur_col SAY "ºDom Seg Ter Qua Qui Sex Sabº"
   @ cur_lin+4,cur_col SAY "ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶"
   @ cur_lin+5,cur_col SAY "º                           º"
   @ cur_lin+6,cur_col SAY "º                           º"
   @ cur_lin+7,cur_col SAY "º                           º"
   @ cur_lin+8,cur_col SAY "º                           º"
   @ cur_lin+9,cur_col SAY "º                           º"
   @ cur_lin+10,cur_col SAY "º                           º"
   @ cur_lin+11,cur_col SAY "ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼"
*/
   beg_date = CTOD("01/"+STR(in_mont,2) + "/" + SUBSTR(TRANSFORM(in_year,"9999"),3,2))

   * Anigma Fix!
   IF in_day > LAST_DAY(in_mont, VAL(SUBSTR(TRANSFORM(in_year,"9999"),3,2)))
      in_day = LAST_DAY(in_mont, VAL(SUBSTR(TRANSFORM(in_year,"9999"),3,2)))
   ENDIF

   mk_date = CTOD(STR(in_day,2) + "/" + STR(in_mont,2) + "/" + SUBSTR(TRANSFORM(in_year,"9999"),3,2))
   base = 31
   DO WHILE .T.
      end_date = beg_date + base
      IF MONTH(beg_date) = MONTH(end_date)
         EXIT
      ENDIF
      base = base - 1
   ENDDO
   @ cur_lin+1,cur_col+1 SAY PADC("¯ "+Mes(MONTH(mk_date)) + " " + SUBSTR(DTOS(mk_date), 1, 4)+" ®",27)
   ret_to = COL()
   IF DOW(beg_date) = 1
      @ cur_lin+4,cur_col + ((DOW(beg_date) * 4) - 4) SAY ""
   ELSE
      @ cur_lin+5,cur_col + ((DOW(beg_date) * 4) - 4) SAY ""
   ENDIF
   FOR date_x = beg_date TO end_date
       IF DOW(date_x) = 1
          @ ROW()+1,cur_col+1 SAY ""
       ELSE
          @ ROW(),COL()+1 SAY ""
       ENDIF
       disp_date = TRANSFORM(DAY(date_x), "999")
       IF DAY(DATE()) = DAY(date_x)
          setcor(4)
          @ ROW(),COL() SAY disp_date
          setcor(1)
       ELSE
          @ ROW(),COL() SAY disp_date
       ENDIF
    NEXT
    @ cur_lin+1,ret_to SAY ""
    INKEY(0)
    DO CASE
    CASE LASTKEY() = 27
       EXIT
    CASE LASTKEY() = 5
       in_year = in_year + 1
    CASE LASTKEY() = 24
       in_year = in_year - 1
    CASE LASTKEY() = 4
       IF in_mont = 12
          in_mont = 1
          in_year = in_year + 1
       ELSE
          in_mont = in_mont + 1
       ENDIF
    CASE LASTKEY() = 19
       IF in_mont = 1
          in_mont = 12
          in_year = in_year - 1
       ELSE
          in_mont = in_mont - 1
       ENDIF
    CASE LASTKEY() = -39
       MOV_MENU(@cur_lin,@cur_col,28,10,calend_scr)
    ENDCASE
ENDDO
SET CURSOR ON
SETCOLOR(old_color)
RESTSCREEN(0,0,24,79, calend_scr)
@ pop_row, pop_col SAY ""
RETURN
*************************************************
FUNC SLEEP(tex)
*************************************************
LOCAL tel_l:=SAVESCREEN(0,0,24,79), tel_, tel_1, ida:=.t.,;
      pri_tel:=.t., t:=1, lin:=10, col:=40, sent:=1, l:=1,;
      cor_ant:=SETCOLOR()
tex=IF(VALTYPE(tex)="U","PC Toledo",SUBST(tex,1,9))
SET CURSOR OFF
DO WHILE .T.
    IF pri_tel
        IF t=1
            tel_1:=SAVESCREEN(10,40,14,49)
            lin:=10
            col:=40
        ELSEIF t=2
            tel_1:=SAVESCREEN(00,00,04,09)
            lin:=col:=00
        ELSEIF t=3
            tel_1:=SAVESCREEN(20,70,24,79)        
            lin:=20
            col:=70
        ENDIF
        l:=1
        pri_tel:=.f.
        SETCOLOR("GR+/N")
        @ lin,col CLEAR TO lin+4,col+9
    ENDIF
    IF ida
        IF t=1
            sent:=SUBST("14223144241423231323131323241423111"+;
                        "324411323144442414241",l,1)
            l++
            IF l=57
                ida=.F.
                l=1
            ENDIF
        ELSEIF t=2
            sent:=SUBST("32423131322314132324241424231323132"+;
                        "313241131414233124424",l,1)
            l++
            IF l=57
                ida=.F.
                l=1
            ENDIF
        ELSEIF t=3
            sent:=SUBST("14241413132314132414241422413142424"+;
                        "232313244411131423324",l,1)
            l++
            IF l=57
                ida=.F.
                l=1
            ENDIF
        ENDIF
    ELSE
        IF t=1
            sent:=SUBST("2313231333324142233142224132314142"+;
                        "4241424141323133241132",l,1)
            l++
        ELSEIF t=2
            sent:=SUBST("3133124413232422314241424142413132"+;
                        "3131414232411424241314",l,1)
            l++
        ELSEIF t=3
            sent:=SUBST("3144132422233314241413131324231132"+;
                        "3132314232414242323132",l,1)
            l++
        ENDIF 
    ENDIF
    SETCOLOR("GR+/N")
    @ lin+2, col+1 SAY PADC(tex,9)
    INKEY(.50)
    IF sent="1"
        tel_=SAVESCREEN(lin-5,col,lin-1,col+9)
        FOR i=1 TO 5
            @ (lin-6)+i, col CLEAR TO (lin-2)+i, col+9
            RESTSCREEN((lin-5)+i,col,(lin-1)+i,col+9,tel_)
            INKEY(.03)
        NEXT
        lin-=5
    ELSEIF sent="2"
        tel_=SAVESCREEN(lin+5,col,lin+9,col+9)
        FOR i=1 TO 5
            @ (lin+6)-i, col CLEAR TO (lin+10)-i, col+9
            RESTSCREEN((lin+5)-i,col,(lin+9)-i,col+9,tel_)
            INKEY(.03)
        NEXT
        lin+=5
    ELSEIF sent="4"
        tel_=SAVESCREEN(lin,col-10,lin+4,col-1)
        FOR i=1 TO 10
            @ lin, (col-11)+i CLEAR TO lin+4, (col-2)+i
            RESTSCREEN(lin,(col-10)+i,lin+4,(col-1)+i,tel_)
            INKEY(.03)
        NEXT
        col-=10
    ELSEIF sent="3"
        tel_=SAVESCREEN(lin,col+10,lin+4,col+19)
        FOR i=1 TO 10
            @ lin, (col+11)-i CLEAR TO lin+4, (col+20)-i
            RESTSCREEN(lin,(col+10)-i,lin+4,(col+19)-i,tel_)
            INKEY(.03)
        NEXT
        col+=10
    ENDIF
    IF t=1
        IF l=57
            ida=.T.
            l=1
            t=2
            pri_tel:=.t.
            RESTSCREEN(10,40,14,49,tel_1)
            inkey(.50)
            LOOP
        ENDIF
    ELSEIF t=2
        IF l=57
            ida=.T.
            l=1
            t=3
            pri_tel:=.t.
            RESTSCREEN(00,00,04,09,tel_1)
            inkey(.50)
            LOOP
        ENDIF
    ELSEIF t=3
        IF l=57
            ida=.T.
            l=1
            t=1
            pri_tel:=.t.
            RESTSCREEN(20,70,24,79,tel_1)
            inkey(.50)
            LOOP
        ENDIF
    ENDIF    
    INKEY(.01)
    IF LASTKEY()=27
        EXIT
    ENDIF
ENDDO    
RESTSCREEN(0,0,24,79,tel_l)
SET CURSOR ON
SETCOLOR(cor_ant)
RETURN(NIL)
***************************************
FUNCTION Last_day

   PARAMETER last_a, last_b

   RETURN(DAY(CTOD(STR(IF(last_a + 1 > 12, 1, last_a + 1)) + "/01/" + SUBSTR(STR(IF(last_a + 1 > 12, last_b + 1, last_b)), -2)) - 1))
*************************************************
FUNCTION Mes(n_mes)
LOCAL meses:={"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto",;
              "Setembro","Outubro","Novembro","Dezembro"}

RETURN(meses[n_mes])


