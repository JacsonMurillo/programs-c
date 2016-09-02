#include <stdio.h>
#include <stdlib.h>



int main (int argc, const char **argv){

    int n_tequila;
    char respuesta[1];
    int cont,
	acum;


    do{
    printf("¿te gustaria tomar un tequilita(S/N)?");
    //respuesta[0]=getch();
    scanf(" %c",&respuesta);
        if(respuesta[0] == 's' || respuesta[0]=='S')
        {
  	    n_tequila++;
	    printf("tequila %i\n", n_tequila);
    
        } 


    }while(respuesta[0] == 's' || respuesta[0] =='S' );
    if(n_tequila >=1 && n_tequila <=3)
    {
	printf("te vas sobrio de la fiesta, con %i tequilas",n_tequila);
    }else if (n_tequila >=4 && n_tequila <=7)
        {
	    printf("te vas un poco mareado de la fiesta, con %i tequilas",n_tequila);
        }else if (n_tequila >=8 && n_tequila <=12)
	     {
	           printf("te vas super borracho  de la fiesta, con %i tequilas",n_tequila);
 	     }else
	     {
		 printf("te vas muerto, con %i tequilas ", n_tequila);
	     }
    


    return EXIT_SUCCESS;
}
