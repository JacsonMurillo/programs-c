#include <stdio.h>
#include <stdlib.h>
#define BASE 10
int main () {


    int entrada ;

/*preguntar en pantalla.*/
    printf("Escribe un numero entre 0 y 999: ");

    scanf(" %i", &entrada);
/*desplazar a la derecha*/

    printf("%i", entrada % BASE);
    /*desplazar a la derecha*/

    entrada /= BASE;

    printf("%i", entrada % BASE);

    entrada /= BASE;

/*imprimir resultado.*/

    printf("%i", entrada % BASE);

    printf("\n");

    return EXIT_SUCCESS;
}
