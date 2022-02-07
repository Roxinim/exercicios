#include <stdio.h>
#include <stdlib.h>
main () {
	float gaso, dist, efic;
	printf("Qual o preco da gasolina atualmente?");
	scanf("%f",&gaso);
	printf("Quantos km voce percorrera na viagem?");
	scanf("%f",&dist);
	printf("Quanto o seu carro faz por litro?");
	scanf("%f",&efic);
	printf("O custo dessa viagem sera de R$ %.2f",((gaso*dist)/efic));
	system("pause");
}
