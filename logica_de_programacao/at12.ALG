Algoritmo "se senao"

Var
x, y:real

Inicio
      escreval("Digite um número:")
      leia(x)
      escreva("Digite outro número:")
      leia(y)
      limpatela
        se(x>y)entao
          escreva(x," é maior que ",y)
          senao
               se(x=y)entao
                 escreva("Os dois números tem o mesmo valor.")
                 senao
                      escreva(y," é maior que ",x)
               fimse
        fimse
Fimalgoritmo