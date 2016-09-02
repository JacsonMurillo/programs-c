#include<stdio.h>
#include<stdlib.h>

int main(){

    int numeros[3][3]={1,2,3,4,5,6,7,8,9};
    int fila=0,
       	col=0;

    for(fila=0;fila<3;fila++){
    
    
	for(col=0;col<3;col++){
	
	    printf("[%d]",numeros[fila][col]);
	}
	printf("\n");
    }


return EXIT_SUCCESS;
}
