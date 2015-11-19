#include <stdio.h>
#include <stdlib.h>

int main () {


    int entrada ;

/*preguntar en pantalla.*/
    printf("Escribe un numero entre 0 y 999: ");

    scanf(" %i", &entrada);
/*desplazar a la derecha*/

    printf("%i", entrada % 10);
    /*desplazar a la derecha*/

    entrada /= 10;

    printf("%i", entrada % 10);
    


    entrada /= 10;

/*imprimir resultado.*/

    printf("%i", entrada % 10);

    printf("\n");

    return EXIT_SUCCESS;
}
