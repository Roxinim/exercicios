Algoritmo "at24"

Var
   idade:inteiro
Inicio
      escreva("Informe a idade do nadador ou nadadora:")
         leia(idade)
         limpatela
             se (idade>=5) e (idade<=7)entao
                 escreva("Categoria: Infantil A (5 a 7 anos)")
             fimse
             se (idade>=8) e (idade<=10)entao
                 escreva("Categoria: Infantil B (8 a 10 anos)")
             fimse
             se (idade>=11) e (idade<=13)entao
                 escreva("Categoria: Juvenil A (11 a 13 anos)")
             fimse
             se (idade>=14) e (idade<=17)entao
                 escreva("Categoria: Juvenil B (14 a 17 anos)")
             fimse
             se (idade>=18) e (idade<=25)entao
                 escreva("Categoria: Sênior (18 a 25 anos)")
             fimse
             se (idade<5)entao
                 escreva("Idade abaixo da faixa etária necessária (5 anos)")
             fimse
             se (idade>25)entao
                 escreva("Idade acima da faixa etária suportada (25 anos)")
             fimse
Fimalgoritmo