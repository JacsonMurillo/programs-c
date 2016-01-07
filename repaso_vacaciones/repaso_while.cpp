#include <stdio.h>
#include <stdlib.h>


int main (){

    int n,
    	acu = 0,
	cont = 0,
	resp,
	prom;

    do {
	printf("dime el numero:\n");
	scanf(" %d",&n);
	printf("Continuar [1. SI 2.NO]\n");
	scanf(" %d",&resp);
	acu =acu+n;
	cont ++;


    
    }while(resp ==1);

    prom = acu/cont;
    printf("promedio: %d",prom);

    return EXIT_SUCCESS;
}

