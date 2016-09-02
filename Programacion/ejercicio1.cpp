#include <stdio.h>
#include <stdlib.h>


void mezclero();

void ladrillo();

int main(){


    printf("necesito mezcla\n");
    mezclero();
    printf("necesito ladrillos\n");
    ladrillo();



return EXIT_SUCCESS;
}
void mezclero(){

    int botes;

    printf("soy el mezclero, ¿cuantos botes quiere?\n");
    scanf(" %i",&botes);
    for (int i=1; i<=botes;i++){

	printf("bote %i\n", i);
    }

}
void ladrillo(){

    int ladrillos;
    printf("soy el de los ladrillo,¿cuantos ladrillos?\n");
    scanf(" %i",&ladrillos);
          for (int i=1; i<=ladrillos;i++){

             printf("ladrillo %i\n", i);
         }

}
