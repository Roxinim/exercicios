#include <stdio.h>
#include <stdlib.h>
main () {
	int n1,n2,n;
	while (n<=20){
		printf("Digite o primeiro numero:");
		scanf("%d",&n1);
		printf("Digite o segundo numero:");
		scanf("%d",&n2);
		system("cls");
		n=n1+n2;
		printf("A soma dos valores resultou em %d\n",n);
		system("pause");
		system("cls");
	}
	if (n>=20){
		printf("A soma dos valores resultou em %d, excedendo o limite de 20\n",n);
	}
	system("pause");
}
