//******************************************************************************
// MWVW.LIB - versao comercial - 17/08/07 - 03:40
// Eric Marcelo Magaldi
// Analista programador de sistemas
// Osasco - Sao Paulo - Brasil
// MSN: ericmagaldi@hotmail.com.br
// http://br.groups.yahoo.com/group/mwvw
//******************************************************************************

//******************************************************************************
// Constantes
//******************************************************************************
#define MWVW_BROWSE_COLOR         1
#define MWVW_ALERT_COLOR          2
#define MWVW_GET_COLOR            3
#define MWVW_SAY_COLOR            4
#define MWVW_WINDOW_COLOR         5
#define MWVW_ENVIRONMENTINFO_KEY  6
#define MWVW_FRM_TOP              7
#define MWVW_FRM_LEFT             8
#define MWVW_FRM_BOTTOM           9
#define MWVW_FRM_RIGHT           10
#define MWVW_SETCOUNT            10
//******************************************************************************
// Traducoes
//******************************************************************************
#ifndef MWVW_NOTTRANSLATE     // Se informar esta constante no PRG, nao havera
                              // traducoes para MWVW, ideal quando trabalhar com
                              // GUI adicional. Ex: HwGui, MiniGui, FiveWin
        #define __MWVW__      // Identifica no PRG, se esta sendo compilado com a MWVW

        //----------------------------------------------------------------------
        #command READ            => MWvWGetListAdd(GetList) ;
                                  ; ReadModal(GetList)      ;
                                  ; GetList := {}

        #command CLEAR GETS      => MWvWGetListAdd(GetList) ;
                                  ; ReadKill(.T.)           ;
                                  ; GetList := {}

        #xtranslate SaveScreen   => MWvWSaveScreen
        #xtranslate RestScreen   => MWvWRestScreen

        #command SAVE SCREEN     => MWvWAreaBegin() ; __XSaveScreen()
        #command RESTORE SCREEN  => MWvWAreaEnd()   ; __XRestScreen()

        #xtranslate DispBox      => MWvWDispBox

        #command @ <row>, <col> SAY <uCaption>                           ;
                                    FONT <cFontName>                     ;
                                    [SIZE <nFSizeV>,<nFSizeH>]           ;
                                    [<lItalic: ITALIC>]                  ;
                                    [<lUnderLine: UNDERLINE>]            ;
                                    [PICTURE <pic>]                      ;
                                    [COLOR <nColorFore> [,<nColorBack>]] ;
                    => DevPos( <row>, <col> )                            ;
                     ; MWvWLabelAdd(<row>, <col>,<uCaption>,<pic>,<cFontName>,<nFSizeV>,<nFSizeH>,<nColorFore>,<nColorBack>,<.lItalic.>,<.lUnderLine.>)

        //#xtranslate DevOutPict   => MWvWDevOutPict
        //#xtranslate DevOut       => MWvWDevOut

#endif
