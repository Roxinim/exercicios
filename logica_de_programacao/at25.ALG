Algoritmo "at25"

Var
mes:inteiro
Inicio
      repita
            escreval("")
            escreval("Escolha o número de um mês:")
            leia(mes)
            limpatela

            escolha(mes)
                   caso 1
                        escreval("O Mês 1 corresponde a Janeiro")
                   caso 2
                        escreval("O Mês 2 corresponde a Fevereiro")
                   caso 3
                        escreval("O Mês 3 corresponde a Março")
                   caso 4
                        escreval("O Mês 4 corresponde a Abril")
                   caso 5
                        escreval("O Mês 5 corresponde a Maio")
                   caso 6
                        escreval("O Mês 6 corresponde a Junho")
                   caso 7
                        escreval("O Mês 7 corresponde a Julho")
                   caso 8
                        escreval("O Mês 8 corresponde a Agosto")
                   caso 9
                        escreval("O Mês 9 corresponde a Setembro")
                   caso 10
                        escreval("O Mês 10 corresponde a Outubro")
                   caso 11
                        escreval("O Mês 11 corresponde a Novembro")
                   caso 12
                        escreval("O Mês 12 corresponde a Dezembro")
                   outrocaso
                        escreval("ERRO! Insira um número de 1 a 12.")
                   fimescolha
      ate (mes<1) ou (mes>12)
Fimalgoritmo