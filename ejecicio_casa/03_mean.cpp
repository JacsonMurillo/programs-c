#include <stdio.h>
#include <stdlib.h>

int main (){

    double acumulador=0;
    int numero ;
    int divisor;
    

    do {
	printf("Dime tus numero:\n");
	scanf(" %i",&numero);
	divisor++;
	acumulador += numero;

    }while ( numero >0 );

    acumulador /= (divisor-1);

printf("la media es:%f",acumulador);

    return EXIT_SUCCESS;
    }
