#include <stdio.h>
#include <stdlib.h>

int main(){

    char nom[20];
    int cancion,
       	partitura;

    printf("dime tu nombre:");
    scanf(" %s",&nom);
    printf("Cuantas canciones tienes:");
    scanf(" %i",&cancion);
    printf("cuantas partitura");
    scanf(" %i",&partitura);

    if(cancion >= 7 && cancion<=10 && partitura ==0)
    { 
	printf("%s, eres un musico naciente\n ",nom);
    }else {
	if(cancion >=7 && cancion <=10 && partitura >=1)
	{
	    printf("%s, eres un musico estelar\n", nom);
	}else {
	if (cancion >10 && partitura >5){
        printf("%s, eres un muscio consagrado\n", nom);
	}else{
	printf("%s, eres un musico en formacion\n");
	}
	}
    }
    
 





    return EXIT_SUCCESS;
    }
