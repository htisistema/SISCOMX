#command @ <row>, <col> GETSAY <xpr> [PICTURE <pic>] [COLOR <color>] ;
      => SayText( WvW_RowSet( <row> ), WvW_ColSet( <col> ), <xpr>, <pic> [, <color>] )

#command @ <row>, <col> SGET <var>                                      ;
                        [PICTURE <pic>]                                 ;
                        [VALID <valid>]                                 ;
                        [WHEN <when>]                                   ;
                        [CAPTION <caption>]                             ;
                        [MESSAGE <message>]                             ;
                        [SEND <msg>]                                    ;
                        [<disabled:DISABLED>]                           ;
                        [<password:PASSWORD>]                           ;
   => AAdd( getList, _GET_( <var>, <"var">, <pic>, <{valid}>, <{when}> ) ) ;
    ; WvW_BuildGetObject( getList, "NORMAL",, {<row>, <col>}, ;
       <caption>, <message>, <{valid}>, <{when}>,,,,, <.disabled.>, <"when">, <.password.> )

/***
*   @..SAY..GET
***/
#command @ <row>, <col> SAY <sayxpr>                                    ;
                        [<sayClauses,...>]                              ;
                        GET <var>                                       ;
                        [<getClauses,...>]                              ;
      => @ <row>, <col> GETSAY <sayxpr> [<sayClauses>]                  ;
       ; @ Row(), Col()+1 SGET <var> [<getClauses>]

// @..GET COLOR
#command @ <row>, <col> GET <var>                                       ;
                        [<clauses,...>]                                 ;
                        COLOR <color>                                   ;
                        [<moreClauses,...>]                             ;
      => @ <row>, <col> SGET <var>                                      ;
                        [<clauses>]                                     ;
                        SEND colorDisp(<color>)                         ;
                        [<moreClauses>]

