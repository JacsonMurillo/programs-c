#include <stdio.h>
#include <stdlib.h>

int main(){

    /*en resultado siempre 0*/
    int resultado = 0;
    int entrada;
    /* el * es significa la direccion de un entero*/
    FILE *pf;

/* pf puede ser otro nombre*/
/* cerrar el fopen con fclose*/
    pf = fopen ("numero.txt", "r");
    fscanf(pf, "%i",&entrada);/*lo guarda el "entrada"*/
    resultado += entrada;/*resultado=resultado+entrada*/
    fclose(pf);

    printf("%i\n", resultado);

    return EXIT_SUCCESS;
}
