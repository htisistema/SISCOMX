                                sr_begintransaction()
                                        try

                                                sr_committransaction()
                                        catch e
                                                tracelog(valtoprg())
                                                sr_COMMITtransaction()
                                        END
                                sr_endtransaction()
