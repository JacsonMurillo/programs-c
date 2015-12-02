#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int opcion = 0;
    double lado,
           altura = 0,
           area = 0;

    printf("cuando mide el lado:\n");

    scanf(" %lf", &lado);
    printf("Menu\n");
    printf("1. perimetro\n");
    printf("2. area\n");
    printf("3. altura\n");
    printf("elige una opcion:\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:

            printf("el perimetro es:" "%lf\n", 3*lado);
            break;

        case 2:

            area = sqrt(3)/4 * (lado*lado);
            printf("el area es:" "%lf\n", area );
            break;
        case 3:
            altura=sqrt (3)/2* lado;
                printf("la altura es:" "%lf\n", altura);
            break;

    }

    return EXIT_SUCCESS;
}
