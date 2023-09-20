cServerIP := 'smtp.ibest.com.br'
porta := 25 ou 587 //aqui na minha maquina funciona nessas portas 100%
cfrom := 'autopecas1313@ibest.com.br'
aTo := {"scominformatica@hotmail.com"}
CMsg := 'segue anexo pdf'
cSubject := ' segue em anexo pedido em PDF'
aFiles :={'02541.pdf'}
cUser := 'autopecas1313@ibest.com.br'
Cpass := '123456'
pop3 := 'pop.ibest.com.br'


if hb_SendMail(cServerIP,porta,cFrom,aTo,,,cMsg,cSubject,aFiles,cUser,cPass,pop3,3,.F.,.T.,.T.,.T.)=.T. 
     msgbOX("E-Mail Enviado Com Sucesso") 
     INKEY(0) 
else 
      RestScreen(10,18,12+2,61+2,TelCrx) 
      msgbOX("Erro ao Enviar E-Mails") 
      INKEY(0) 
 endif 
   
