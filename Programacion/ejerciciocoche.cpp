#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (){

    int vi, vf;

    printf("Vueltas constantes");

    for(int vuelta=1;vuelta<=5; vuelta++)
    {
	printf("vueltas %i\n",vuelta); 
    }
   printf("cantidad inicial de vueltas:");
   scanf(" %i",&vi);
   printf("cantidad final de vueltas:");
   scanf(" %i",&vf);

   for( int vuelta=vi; vuelta<=(vi+vf); vuelta++)
   {
       printf("vueltas %i\n",vuelta);
       sleep(1);
   }



    return EXIT_SUCCESS;
}
