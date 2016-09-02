#include<stdio.h>
#include<stdlib.h>

int main(){

    int numeros[10]={2,3,5,4,6,8,7,8,9,10};
    int numero2;
    int posicioni;
    for(int posicion=0;posicion<=9;posicion++){
    
	printf("la posicion %i esta el numero %i\n",posicion,numeros[posicion]);
    
    }

    for(posicioni=0;posicioni <=9;posicioni ++){
    
	printf("ingresa los numeros en la posicion %i:",posicioni);
	scanf(" %i",&numero2[posicioni]);
    
    }


    return EXIT_SUCCESS;
}
