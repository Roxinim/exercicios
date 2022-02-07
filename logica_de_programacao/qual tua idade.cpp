#include <stdio.h>
#include <stdlib.h>
main () {
	int idade;
	printf("Informe sua idade:");
	scanf("%d",&idade);
	if (idade <12){
		printf("Voce eh crianca\n");
	}
	else if (idade>=12&&idade<18){
		printf("Voce eh adolescente\n");
	}
	else if (idade>=18&&idade<60){
		printf("Voce eh adulto\n");
	}
	else {
		printf("Voce eh idoso\n");
	}
	system("pause");
}
