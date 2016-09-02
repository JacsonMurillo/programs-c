#include<stdio.h>
#include<stdlib.h>

int main(int argc, const char **argv){

    int matriz[4][4];
    int vector[4];
    int fila,
	col;
    printf("ingrese los datos de la matriz\n");
    for(fila=0;fila<4;fila++){

	for(col=0;col<4;col++){

	    printf("ingresa el dato de la posicion[%d][%d]",fila,col);
	    scanf("%d",&matriz[fila][col]);
	}

    }
    printf("")

return EXIT_SUCCESS;
}
