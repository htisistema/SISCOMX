#define WVW_DEFAULT_MENUKEYEVENT  1024

#define IDM_CONTEXTMENU           59190

#define WIN_TOOLBAR_ID            60000

#define IDM_CUT                   404
#define IDM_COPY                  405
#define IDM_PASTE                 406

#define IDM_HELP_HELP             59301
#define IDM_HELP_INFO             59302
#define IDM_HELP_SETUP            59303
#define IDM_EXIT_APP              59501

#define SP_TB_BASIC               001
#define SP_TB_GYC                 002
#define SP_TB_COMMON              003
#define SP_TB_ALL                 004

#define CRLF CHR(13)+CHR(10)

#xcommand DEFAULT <v1> TO <x1> [, <vn> TO <xn> ] ;
    => IF <v1> == NIL ; <v1> := <x1> ; END ;
    [; IF <vn> == NIL ; <vn> := <xn> ; END ]

