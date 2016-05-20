#include<stdio.h>
#include<stdlib.h>

int suma(int n){
    if (n == 0)
        return 0;
    return n + suma(n-1);
}

int main(int argc, const char **argv) {

    printf("suma de 2 : %i\n", suma(5));


    return EXIT_SUCCESS;
}
