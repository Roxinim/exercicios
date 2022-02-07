#include <stdio.h>
#include <stdlib.h>
main () {
	int numero;
	for (numero=1;numero<=100;numero=numero+2){
		printf("%d \n",numero);
		//numero=(numero+1); se ali ^^ tiver n++
	}
	system("pause");
} 
