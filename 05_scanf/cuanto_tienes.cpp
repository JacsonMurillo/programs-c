#include <stdio.h>
#include <stdlib.h>

int main(){

    int saldo;
    int mes, anio;

    const char *MES[12] ={"Enero","Febrero","Marzo", "Abril","Mayo", "Junio", "Julio","Agosto", "Septiembre","Octubre", "Noviembre", "Diciembre"};

    printf("¿Cuanto dinero tienes?\n");
    printf("yo=<cantidad>\n");
/*el espacio entre  en "yo" significa quita todo los espacio*/

    scanf(" yo=%i", &saldo);
    printf("Saldo: %i\n", saldo);

    printf("Fecha de nacimiento (dd/mm/aa:):");
    scanf(" %*i/%i/%i",  &mes, &anio);
//el * es el caracter de supresion de asignacion, quita la %i

    printf("naciste en  %s de %i.\n", MES[mes-1], anio);

    return EXIT_SUCCESS;
}
