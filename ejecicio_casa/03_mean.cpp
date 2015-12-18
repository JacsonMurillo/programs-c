#include <stdio.h>
#include <stdlib.h>

int main (){

    int acumulador;
    int numero ;
    int divisor;
    acumulador = 0;

    do {
	printf("Dime tus numero:\n");
	scanf(" %i",&numero);
	divisor++;
	acumulador += numero;

    }while ( numero >0 );

    acumulador /= divisor;

printf("la media es:%i",acumulador);

    return EXIT_SUCCESS;
    }
