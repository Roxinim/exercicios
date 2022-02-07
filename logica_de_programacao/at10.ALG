Algoritmo "idade_dias"

Var
   diaN, mesN, anoN, diaA, mesA, anoA, x, y, z, total_de_dias:inteiro

Inicio
      escreval("Digite o dia, mês e ano em que você nasceu:")
      leia(diaN, mesN, anoN)
      escreval("Digite o dia, mês e ano atuais")
      leia(diaA, mesA, anoA)
      x<-diaA-diaN
      y<-mesA-mesN
      z<-anoA-anoN
      total_de_dias<-x+(y*30)+(z*365)
      limpatela
      escreva("A sua idade convertida em dias é de, aproximadamente,",total_de_dias," dias.")
Fimalgoritmo