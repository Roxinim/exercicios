#include <stdio.h>
#include <stdlib.h>
main () {
	float nota;
	printf("Qual sua nota?");
	scanf("%f",&nota);
	if (nota>=7){
		printf("Voce esta aprovado");
	}
	else{
		printf("Voce esta reprovado");
	}
	
	system("pause");
}
