#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;

    printf("dime un numero entero:\n");
    scanf("%d", &num);

    for( int i=2;i<num;i+=2)
	printf("%d\n",i);


    return EXIT_SUCCESS;
}
