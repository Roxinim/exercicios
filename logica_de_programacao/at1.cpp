#include <stdio.h>
#include <stdlib.h>
main (){
	float v1, v2, som, sub, mul;
	float div;
	printf("Digite um numero:");
	scanf("%f", &v1);
	printf("Digite outro numero:");
	scanf("%f", &v2);
	som=v1+v2;
	sub=v1-v2;
	mul=v1*v2;
	div=v1/v2;
    system("cls");
    printf("Resultados: \n");
	printf("Soma entre %.0f e %.0f = %.0f \n",v1, v2, som);
	printf("Subtracao entre %.0f e %.0f = %.0f \n",v1, v2, sub);
	printf("Multiplicacao entre %.0f e %.0f = %.0f \n",v1, v2, mul);
	printf("Divisao entre %.0f e %.0f = %.2f \n",v1, v2, div);
	system("pause");
}
