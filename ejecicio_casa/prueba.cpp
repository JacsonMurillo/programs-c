#include<stdio.h>
#include <stdlib.h>

int main ()
{
    int c, f, lado;
    printf("Dime un numero:");
    scanf(" %i", &lado);

    for (c=0;c<lado;c++)
    {
	printf(" *");
    }
    printf("\n");

    for (f=0;f<lado;f++)
    {
	printf("*");
	for(c=0;c<lado;c++)
	{
	    printf(" ");
	}
	printf("*\n");
    }
    for (c=0;c<lado;c++)
    {
	printf("*");
    }

    return EXIT_SUCCESS;
}

