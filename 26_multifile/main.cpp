#include <stdio.h>
#include <stdlib.h>
#include "suma.h"
int main(int argc, const char **argv){

    double op[2];

    printf("este programa suma.\n\n");
    for(int i=0;i<2;i++){
        printf("operando %i:", i+1);
        scanf("%lf", &op[i]);
    }

    printf("Resultado = %.2lf\n",
            suma(op[0],op[1])
                );

            return EXIT_SUCCESS;




            }
