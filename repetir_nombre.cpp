#include <stdio.h>
#include <stdlib.h>

int main (){
    int contador = 0;
    char nombre [5];

    printf("Dime tu nombre:");
    /* no hace falta el & en las variables tipo char,(en la int SI)*/
    scanf( " %s",nombre);
    do {
        printf( "%s\n", nombre);
	contador +=1 ;
    } while(contador != 10);



    return EXIT_SUCCESS;
}
