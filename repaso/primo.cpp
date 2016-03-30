#include<stdio.h>
#include<stdlib.h>

int main(){

    int num, 
	primo=1;
    printf("dime un numero entero:\n");
    scanf("%d", &num);
//recorre desde 2 hasta -//recorre desde 2 hasta -1
    for (int i=2;i<num-1;i++)
	if(num%i ==0){
	primo=0;
	break;
	}

if (primo)
    printf("%d es primp.", num);
else
    printf("%d no es primo.",num);

    return EXIT_SUCCESS;
}
