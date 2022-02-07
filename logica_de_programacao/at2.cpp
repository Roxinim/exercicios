#include <stdio.h>
#include <stdlib.h>
main (){
	int X, Y, temp;
	printf("Digite um valor para X:");
	scanf("%d", &X);
	printf("Digite um valor para Y:");
	scanf("%d", &Y);
	temp=X;
	X=Y;
	Y=temp;

	system("cls");
	printf("O valor de X agora: %d \nO valor de Y agora: %d \n", X, Y);
	system("pause");
	
}
