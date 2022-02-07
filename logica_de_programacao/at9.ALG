Algoritmo "custo_viagem"

Var
   preco, distancia, eficiencia, gasolina, custo_final, custo_idaevolta:real

Inicio
      escreva("Qual o preço da gasolina atualmente? ")
      leia(preco)
      escreva("Quantos quilômetros terá a viagem?")
      leia(distancia)
      escreva("Quantos quilômetros o carro faz por litro de gasolina?")
      leia(eficiencia)
      gasolina<-distancia/eficiencia
      custo_final<-gasolina*preco
      custo_idaevolta<-custo_final*2
      limpatela
      escreval("O custo da viagem será de",custo_final:7:2," reais.")
      escreva("Para ida e volta, o custo é de",custo_idaevolta:7:2," reais.")



Fimalgoritmo