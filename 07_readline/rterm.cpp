#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(int argc, const char **argv){

    char *linea;

    system("toilet -f pagga -F border --gay 'Remote Compueter'");

    printf("hack me if you can.\n\n\n");

    linea = readline("login:");
    printf("%s isn't a valid pasword.\n", linea);
    linea = readline("login:");
    printf("%s isn't a valid pasword.\n", linea);
    linea = readline("login:");
    printf("%s isn't a valid pasword.\n", linea);

    printf("to much retries.\n");
    free(linea);

    EXIT_SUCCESS;

}
