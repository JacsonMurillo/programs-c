#include <stdio.h>
#include <stdlib.h>

int main(){

    int lado;

    printf("Dime un numero:");
    scanf(" %i", &lado);

    for (int fila=0; fila<lado;fila++){
	printf("*");
    }
    printf("\n");

    for(int col=0; col<lado; col++){

	printf("*");
	for(int fila=0;fila<lado;fila++){
	    printf(" ");
	}
	printf("* \n");
    }
	for (fila=0;fila<lado;fila++)
	{

	    printf("*");
	}

	return EXIT_SUCCESS;
    }
