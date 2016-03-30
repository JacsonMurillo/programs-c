#include<stdio.h>
#include<stdlib.h>

int main(){

    double euros;
    double dolar;

    printf("Di la cantidad en euros\n");
    scanf("%2lf", &euros);

    dolar=euros * 1.10;

    printf("Dolar:%lf\n", dolar);

    return EXIT_SUCCESS;
}
