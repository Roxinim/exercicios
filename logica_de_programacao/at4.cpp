#include <stdio.h>
#include <stdlib.h>

main(){
	float numero, met, dob;
	printf("Digite um numero:");
	scanf("%f", &numero);
	met=numero/2;
	dob=numero*2;
	printf("Metade: %.2f \nDobro: %.2f \n", met, dob);
	system("pause");
	
}
