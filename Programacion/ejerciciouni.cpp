#include <stdio.h>
#include <stdlib.h>

int main(){

    char nom[20];
    char menu[1];
    int hora;

    printf("dime tu nombre:");
    scanf(" %s",&nom);
    printf("Menu de Actividades\n");
    printf("D. Dormir\nE. Estudiar\nT. Trabajar\n");
    prinft("%s ¿que desea hacer?\n",nom);
    scanf(" %s", &menu);

    switch(menu[0]){

	case 'd':
	case 'D':
	    printf("cuantas horas desea dormir:");
	    scanf(" %i", hora);
	    if(hora<=4 && hora>=1)
	    { prinft("duerme poco");}

	break;

	    }

    




     return EXIT_SUCCESS;
}
