#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>


struct TNave{
    int vida;
    char cuerpo;
};
struct TAlgo {
    int vida;
    char cuerpo;
}nave1, nave2;
typedef struct TNave Nave;

int main(int argc, const char **argv){

    struct TNave bueno={3,'O'};
    struct TNave malo;

    malo.vida = 5;
    malo.cuerpo ='A';

    memset(&bueno,0,);


}

return EXIT_SUCCESS;
}
