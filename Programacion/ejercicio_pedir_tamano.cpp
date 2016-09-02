#include<stdio.h>
#include<stdlib.h>

int main (){
    int tamano=0;
    int posicion=0;
    printf("dime el tamano del array: ");
    scanf(" %i",&tamano);

    int numeros;
    for (posicion=0;posicion<tamano;posicion++){
    
	printf("posicion %i",posicion);
	scanf(" %i",&numeros);
    }

return EXIT_SUCCESS;
}
