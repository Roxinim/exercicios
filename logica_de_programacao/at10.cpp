#include <stdio.h>
#include <stdlib.h>
main () {
	int numero;
	printf("Digite um numero:");
	scanf("%d",&numero);
	printf("O antecessor desse numero eh %d, e seu sucessor eh %d\n",numero-1, numero+1);
	system("pause");
}
