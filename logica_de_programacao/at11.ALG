Algoritmo "se senao"

Var
n1, n2, n3, n4, med:real

Inicio
      escreval("Informe suas quatro notas:")
      leia(n1, n2, n3, n4)
      med <-(n1+n2+n3+n4)/4
        se(med>=7)entao
          escreval("A sua média é",med)
          escreva ("Você foi aprovado, parabéns!")
        senao
             se(med<4.5)entao
               escreval("A sua média é",med)
               escreva ("Você foi reprovado! Estude mais da próxima vez")
               senao
                    escreval("A sua média é",med)
                    escreva ("Você está em recuperação!")
              fimse
        fimse
Fimalgoritmo