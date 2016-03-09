#include <stdio.h>
#include <stdlib.h>

void set(int *matriz, int fila, int col, int dato){

}

int get(int *matriz, int fila, int col){
   int dato;

   return dato;
}

int main(int argc, const char **argv){

    int *a = NULL;
    int filas, col; // Preguntar al usuario.
    int buffer;

    printf("Dime cuantas filas quieres:\n");
    scanf("i%",filas);
    printf("Dime cuantas columnas quieres:\n");
    scanf("i%",col);


    a=(int *) malloc(2*sizeof(int));// reservar espacio para a


    for (int f=0; f<filas; f++)
        for (int c=0; c<col; c++){
            printf("(%i, %i)", f+1, c+1);
            scanf(" %i", &buffer);
            set(a, f, c, buffer);
            a(filas*col+col);
        }


    // Imprimir la matriz usando get

    free(a);// Liberar espacio para a

    return EXIT_SUCCESS;
}
