#include <stdio.h>
#include <stdlib.h>


int main(){

    int opcion1,
	opcion2,
	n1,
	n2,
	r;
    char l;
do{
    printf("1.Operacion basicas\n 2. Detectar vocales\n 3.Salir: \n Opcion:");

    scanf(" %d",&opcion1);

    switch(opcion1)
    {
	case 1:
	    do {
		printf("1.Suma \n 2.Resta \n 3. Regresar al menu:");
		scanf(" %d",&opcion2);
		switch(opcion2)
		{
		    case 1:
			printf("primer valor:");
			scanf(" %d",&n1);
			printf("segundo valor:");
			scanf(" %d",&n2);
			r = n1+n2;
			printf("El resultado es : %d \n",r);
			break;
		    case 2:
			printf("primer valor:");
			scanf(" %d",&n1);
			printf("segundo valor:");
			scanf(" %d",&n2);
			r = n1-n2;
			printf("El resultado es :%d \n",r);

		    case 3:
			break;
		}
	    }while(opcion2 !=3);
        break;
	case 2:
	    printf("Escribe una tecla:\n");
	    scanf(" %c",&l);
	    if(l =='a' || l =='e' || l=='i' || l=='o' || l=='u')
		printf("haz tecleado una vocal\n");
	    else
		printf("no tecleaste una vocal\n");


	    break;
	case 3:

	    break;
    }
}while(opcion1 !=3);

    return EXIT_SUCCESS;
}
