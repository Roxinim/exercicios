Algoritmo "se senao"

Var
x, y, dif:inteiro

Inicio
      escreval("Digite um número:")
      leia(x)
      escreva("Digite outro número:")
      leia(y)
      limpatela
        se(x>y) entao
          dif<-x-y
          escreval("A diferença entre os dois números é de ",dif)
          senao
               se (x=y)entao
                 escreva("Os dois números são iguais")
                 senao
                      dif<-y-x
                      escreva("A diferença entre os números é de ",dif)

               fimse
        fimse
Fimalgoritmo