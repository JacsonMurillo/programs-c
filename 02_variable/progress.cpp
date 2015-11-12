#include <stdio.h>
#include <stdlib.h>

int main(){

    for (int vez=0; vez<80; vez++){
    printf("\r");
    for (int i=0; i<10; i++)
        printf("=");
    printf(">");

    }
    return EXIT_SUCCESS;
}
