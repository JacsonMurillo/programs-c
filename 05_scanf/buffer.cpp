#include <stdio.h>
#include <stdlib.h>

int main( int argc, const char **argv){

    char buffer[5];

    printf("say somenthing:");

    /*nombre , tamaño, stdin*/

    fgets(buffer, 1, stdin);

    return EXIT_SUCCESS;
}


