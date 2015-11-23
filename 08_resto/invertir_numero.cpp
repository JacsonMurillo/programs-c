#include <stdio.h>
#include <stdlib.h>
#define BASE 8
int main () {


    int entrada ;
    int revertir
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
/*guardar la variable*/
    scanf(" %i", )

    printf("\n");

    return EXIT_SUCCESS;
}
