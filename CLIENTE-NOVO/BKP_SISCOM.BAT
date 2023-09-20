cd c:\helio\siachb\bak
set dt=%date:~6,4%%date:~3,2%%date:~0,2%
set ISC_USER=SYSDBA
set ISC_PASSWORD=masterkey
set host=localhost/3050:c:\helio\siachb\siscom.gdb
rem set nome_arq=bkp\bkp.fbk
rem set log_name=bkp\bkp.log
set caminho_bkp=bkp\bkp_hti
gbak -b %host% %caminho_bkp%%dt%.fbk -z -v -y %caminho_bkp%%dt%.log
