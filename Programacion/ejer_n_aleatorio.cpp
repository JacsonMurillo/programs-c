#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int numero=0,
	aciertos=0,
	errores=0,
	num_usuario=0;
    srand(time(NULL));//genera semilla
    for(int i=0;i<5;i++)
    {

        numero=1+rand()%(51-1);//genera numero aleatorio entre 1 y50
        printf("adivina el numero entre el 1 y 50: ");
        scanf(" %d",&num_usuario);

    if (num_usuario==numero)
       {

  	    printf("correcto, el numero es %d\n",numero);
	    aciertos++;
       }else{
	    printf("incorrecto, el numero es %d\n ",numero);
	    errores++;
           }
    }
    printf("tus aciertos fueron %d\n",aciertos);
    printf("tus errores fueron %d\n",errores);


    return EXIT_SUCCESS;
}
