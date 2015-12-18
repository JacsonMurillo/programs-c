#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int a = 4;
    int b = 1;

    for(int fila=0; fila<a; fila++){
	for (int col = 0; col<fila+1; col++)
	    printf("*");
	printf("\n");
    }

    return EXIT_SUCCESS;
}
