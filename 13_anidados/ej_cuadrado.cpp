#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int ancho,
	alto ;

    printf("dime el ancho:");
    scanf(" %i", &ancho);
    printf("dime el largo");
    scanf(" %i", &alto);

        for (int d=0;d<ancho; d++ ){
            printf("\n");
        for (int l=0; l<alto;l++)
            printf("* ");
        }


                printf("\n");


    return EXIT_SUCCESS;
}
