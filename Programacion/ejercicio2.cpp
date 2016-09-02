#include <stdio.h>
#include <stdlib.h>


void mezclero(int botes);

void ladrillo(int ladrillos);

int main(){


    printf("necesito 5 mezcla\n");
    mezclero(5);
    printf("necesito 10 ladrillos\n");
    ladrillo(10);



return EXIT_SUCCESS;
}
void mezclero(int botes){
   
    int conta_botes=0;

    for (conta_botes=1;conta_botes<=botes;conta_botes++){

	printf("bote %i\n", conta_botes);
    }

}
void ladrillo(int ladrillos){



         }


