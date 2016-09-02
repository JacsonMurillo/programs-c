#include <stdio.h>
#include <stdlib.h>

int main(){

    char nompro[20],
	    medida[12];
    float precio = 0.0,
	  cantidad = 0.0,
	  total = 0.0,
	  recibi = 0.0,
          cambio = 0.0;

    printf("nombre del producto:");
    scanf("%s",&nompro);
    printf("unidad de medida:");
    scanf("%s",&medida);
    printf("precio:");
    scanf(" %f",&precio);
    printf("cantidad:");
    scanf(" %f",&cantidad);
    printf("recibi:");
    scanf(" %f",&recibi);

    total = (cantidad * precio);

    printf("usted paga por %.1f %s de %s %.2f\n",cantidad,medida,nompro,total);
    if (recibi >= total)
    { 
	cambio = recibi - total;
	printf(" su cambio es %.2f\n", cambio);
	printf("Gracias por su compra\n");
    }
    else
    {
	printf("falta dinero\n");

    }
    return EXIT_SUCCESS;
}
