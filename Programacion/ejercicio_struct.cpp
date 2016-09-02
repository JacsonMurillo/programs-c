#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
struct datos{
    char nombre;
    int edad;
    float nota;
}alumnos[3];

int main(int argc, const char **argv){

    
    for(int i=0;i<3;i++){
//    fflush(stdin);
	printf("nombre del alumnos %d:",(i+1));
	scanf("%s",&alumnos[i].nombre);
	//gets(alumnos[i].nombre);
	printf("edad:");
	scanf(" %i",&alumnos[i].edad);
	printf("nota:");
	scanf(" %f",&alumnos[i].nota);
    }
    for(int i=0;i<3;i++){
    printf("alumno %i\n",(i+1));
	printf("nombre: %s \n",alumnos[i].nombre);
	printf("edad: %i \n",alumnos[i].edad);
	printf("nota: %.2f\n",alumnos[i].nota);
    }
    //da error corregir



return EXIT_SUCCESS;
}
