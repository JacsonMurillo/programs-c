#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main()
{

    int num1,a;

    a=0; /*Esta variable la vamos a usar para contar los divisores del número introducido, la inicializamos a 0*/

    printf("Introduce un numero: ");
    scanf("%d",&num1);

    for(int i=1;i<=num1;i++)
    {
	if(num1%i==0) // si num1 módulo de i es 0, incrementamos a en 1.

	    a++;
    }
    /*Si al final del bucle, a vale 2, el número es primo, porque tiene solamente 2 divisores.*/


    if(a==2)
    {
	printf("El número es primo\n");
    }
    else
    {
	printf("El número no es primo\n");
    }


}
