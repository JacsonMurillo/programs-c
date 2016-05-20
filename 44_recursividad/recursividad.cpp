#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
    if (n == 0)
        return 1;
    return n * factorial(n-1);
}
/*la funcion factorial es la de arriba*/ 

int main(int argc, const char **argv) {

    printf("factorial : %i\n",factorial(5));
    return 0;

    return EXIT_SUCCESS;
}
