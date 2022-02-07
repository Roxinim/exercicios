#include <stdio.h>
#include <stdlib.h>
main () {
	int n1;
	printf("Insira um numero:");
	scanf("%d", &n1);
	if((n1%2)==0){
		printf("O numero %d eh PAR\n", n1);
		}
		else {
		printf("O numero %d eh IMPAR\n", n1);
		}
	system("pause");
}
