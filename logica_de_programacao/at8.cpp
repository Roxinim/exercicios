#include <stdio.h>
#include <stdlib.h>
main (){
	int An, Aa;
	printf("Em que ano voce nasceu?");
	scanf("%d", &An);
	printf("Qual o ano atual?");
	scanf("%d", &Aa);
	printf("Voce tem aproximadamente %d dias de vida\n", (Aa-An)*365);
	system("pause");
}
