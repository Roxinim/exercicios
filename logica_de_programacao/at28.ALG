Algoritmo "at28"

Var
x, homens, mulheres:inteiro
nome, sexo:caractere
Inicio
 repita
       x <- x +1
       escreval("Digite o nome e o sexo(H ou M):")
       leia(sexo)
       se (sexo="H")entao
          homens<-homens+1
       fimse
       se (sexo="M")entao
          mulheres<-mulheres+1
       fimse
 ate (x=100)
 limpatela
 escreval("Total:")
 escreval("H:",homens)
 escreval("M:",mulheres)
Fimalgoritmo