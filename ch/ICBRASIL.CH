/*
                  Copyright (C) 2006
                  Interactive Choice Brasil
                  Todos os Direitos Reservados

*******************************************************************************
 Analista      *  Manoel Angeiras
 Programador   *  Manoel Angeiras
 Programa      *  ICBRASIL.CH
 Comentarios   *  Definicoes gerais para todos os programas que utilizem o
               *  xharbour.
 Alteracoes    *
*******************************************************************************
*/
#include "inkey.ch"
#include "common.ch"
#include "winuser.ch"
#include "wingdi.ch"
#include "setcurs.ch"
#include "getexit.ch"

#define COLUNA(x)                   "_aEdit[_nPosAtual," + ltrim(str(x)) + "]"

#define LER_GETS( x )               setcursor(1); read; setcursor(x)

#define COR_NORMAL                  setcolor("n/w,w+/b,n,n,n/w")
#define COR_GET                     setcolor("n/w,n+/gr+*,n,n,n/w*")
#define COR_SAY_GET                 setcolor("N/W*")

#define WVW_VOLTAR_FOCO             WVW_xReposWindow()

#define WVW_DEFAULT_MENUKEYEVENT    1024

#define EXIBE_DADOS( cAlias )       VarGet( cAlias ); SayVar( cAlias )

#define SIMNAO { "S - SIM    ", "N - NÃO    " }

#define UFSBRASIL { "AC - ACRE"               , "AL - ALAGOAS"            ,;
                    "AM - AMAZONAS"           , "AP - AMAPA"              ,;
                    "BA - BAHIA"              , "CE - CEARA"              ,;
                    "DF - DISTRITO FEDERAL"   , "ES - ESPIRITO SANTO"     ,;
                    "GO - GOAIS"              , "MA - MARANHAO"           ,;
                    "MG - MINAS GERAIS"       , "MS - MATO GROSSO DO SUL" ,;
                    "MT - MATO GROSSO"        , "PA - PARA"               ,;
                    "PB - PARAIBA"            , "PE - PERNAMBUCO"         ,;
                    "PI - PIAUI"              , "PR - PARANA"             ,;
                    "RJ - RIO DE JANEIRO"     , "RN - RIO GRANDE DO NORTE",;
                    "RO - RONDONIA"           , "RR - RORAIMA"            ,;
                    "RS - RIO GRANDE DO SUL"  , "SC - SANTA CATARINA"     ,;
                    "SE - SERGIPE"            , "SP - SAO PAULO"          ,;
                    "TO - TOCANTIS" }

//
// COMANDOS PARA CRIACAO DOS MENUS
//
#command CREATEMENU <hMenu>         => ;
         <hMenu> := WVW_CreateMenu()

#command CREATESUBMENU <hMenuItem>     ;
         OF <hSubMenuItem>             ;
         PROMPT <cPrompt>           => ;
         <hSubMenuItem> := WVW_CreateMenu(); WVW_AppendMenu( <hMenuItem>, MF_POPUP, <hSubMenuItem>, <cPrompt> )

#command MENUITEM <hMenuItem>          ;
         OF <hMenu>                    ;
         PROMPT <cPrompt>           => ;
         <hMenuItem> := WVW_CreateMenu(); WVW_AppendMenu( <hMenu>, MF_ENABLED + MF_POPUP, <hMenuItem>, <cPrompt> )

#command SUBMENUITEM <hMenuItem>       ;
         PROMPT <cPrompt>              ;
         ACTION <nAction>              ;
         FLAGS <nFlags>             => ;
         WVW_AppendMenu( <hMenuItem>, <nFlags>, <nAction>, <cPrompt> )

#command MENUTRACOS   <hMenuItem>   => ;
         WVW_AppendMenu( <hMenuItem>, MF_SEPARATOR )

#command @ <row>, <col> GET <var>                                ;
                        [<clauses,...>]                          ;
                        PASSWORD                                 ;
                        [<moreClauses,...>]                      ;
                                                                 ;
      => @ <row>, <col> GET <var>                                ;
                        [<clauses>]                              ;
                        SEND reader := {|oGet|                   ;
                                        GetPassword( oGet ) }    ;
                        [<moreClauses>]
