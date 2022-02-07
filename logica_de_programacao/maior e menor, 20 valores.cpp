#include <stdio.h>
#include <stdlib.h>
main () {
	int quant, rep=1, n1, maior, menor;
	printf("Informe a quantidade de valores a serem analisados:");
	scanf("%d",&quant);
	
	printf("Digite o %d  valor:",rep);
	scanf("%d",&n1);
	menor=n1;
	maior=n1;
	rep++;
	//rep=rep+1;
	do{
		printf("Digite o %d  valor:",rep);
		scanf("%d",&n1);
		
		if (n1>maior){
			maior=n1;
		}
		if (n1<menor){
			menor=n1;
		}
		//system("cls");
		//printf("%d\n%d\n",maior, menor);//PRA TESTES
		rep++;//rep=rep+1;
		n1=0;
		
	}while (rep<=quant);
	printf("Dos %d valores, o maior eh %d e o menor eh %d \n",quant, maior, menor);
	system("pause");
}
