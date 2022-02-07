#include <stdio.h>
#include <stdlib.h>

main(){
	float gas, sal, res;
	printf("Insira seus gastos:");
	scanf("%f", &gas);
	printf("Insira quanto vc recebe de salario:");
	scanf("%f", &sal);
    res=sal-gas;
    system("cls");
    printf("O seu saldo eh de R$ %.2f", res);
    system("pause");
}
