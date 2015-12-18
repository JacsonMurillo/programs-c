#include <stdio.h>
#include <stdlib.h>

int main() {
    int kelvin = 0;
    int fahre = 0;
    int celsius = 0;
/*Pregunta la temperatura*/
    printf("Dime la temperatura:\n");
/*leer el numero introducido */
    scanf("%i", &celsius);
/*aplicar la formula*/
    do{
       	fahre = celsius*1,8+32;
        kelvin = celsius+273,15;
        printf ("%i", fahre);
   } while(celsius != 10);




    printf("\n");
    return EXIT_SUCCESS;
}
