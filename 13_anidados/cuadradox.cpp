
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int lado = 5;

    printf("\n");
    for (int fila=0; fila<lado; fila++){
        for (int col=0; col<lado; col++)
            if(col<fila)
                printf("0");
            else
            printf("*");
        printf("\n");
    }

    return EXIT_SUCCESS;
}
