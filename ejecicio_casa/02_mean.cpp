#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero,cont;
    double suma;
    cont=0;

    while(cont<10){

	printf("dime un numero entero:");
	scanf("%d",&numero);
	cont++;
	suma=suma+numero;

    }

    printf("La media de los numeros es %f\n",suma/10);

    return EXIT_SUCCESS;
}

