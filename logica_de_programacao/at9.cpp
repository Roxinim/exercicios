#include <stdio.h>
#include <stdlib.h>
main () {
	float numero;
	printf("Digite um numero:");
	scanf("%f",&numero);
	printf("Metade: %.2f\nTerca parte:%.2f\nQuinta parte: %.2f\n",numero/2, numero/3, numero/5);
	system("pause");
}
