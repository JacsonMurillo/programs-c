#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

struct Datos{

    char nombre[20];
    int edad;
    float nota;
}alumno[3];

void capturar(){
    int i;
    for(i=0;i<3;i++){

	fflush(stdin);
	printf("Nombre del alumno %d :",(i+1));
	scanf(" %s",&alumno[i].nombre);
	printf("Edad de alumno %i :",(i+1) );
	scanf(" %i",&alumno[i].edad);
	printf("Nota del alumno %i:",(i+1));
	scanf("%f",&alumno[i].nota);
    }
}
void mostrartodo(){

    printf("mostrando los datos de los alumnos\n");
    for(int i=0;i<3;i++){

	printf("alumno %i\n",(i+1));
	printf("Nombre : %s\n",alumno[i].nombre);
	printf("Edad: %i\n",alumno[i].edad);
	printf("Nota: %f\n",alumno[i].nota);
    }
}
void buscarEdad(){
    int ed,encontrado;
    printf("ingresa la edad");
    scanf("%i",&ed);
    for(int i=0;i<3;i++){
	if(alumno[i].edad==ed){
	    encontrado=1;
	    printf("alumno %i\n",(i+1));
	    printf("nombre: %s\n",alumno[i].nombre);
	    printf("edad: %i\n",alumno[i].edad);
	    printf("nota: %f\n",alumno[i].nota);
	}
    }
    if(encontrado==0){
	printf("no hay alumnos con esa edad %i\n",ed);
    }
}

void buscarNota(){
    int encontrado;
    float n_nota;
    printf("ingresa la nota");
    scanf("%f",&n_nota);
    for(int i=0;i<3;i++){
	if(alumno[i].nota==n_nota){
	    encontrado=1;
	    printf("alumno %i\n",(i+1));
	    printf("nombre: %s\n",alumno[i].nombre);
	    printf("edad: %i\n",alumno[i].edad);
	    printf("nota: %.2f\n",alumno[i].nota);
	}
    }
    if(encontrado==0){
	printf("no hay alumnos con esa nota  %.2f\n",n_nota);
    }
}


void salir(){

    printf("Programa Finalizado\n");
}
void menu(){
    int opcion;
    do{
	printf("Menu de Opciones\n");
	printf("1.Inserta alumnos\n");
	printf("2.Mostrar de alumnos\n");
	printf("3.Buscar Alumno por Edad\n");
	printf("4.Buscar Alumno por Promedio\n");
	printf("5.Salir\n");
	printf("selecione una opcion: ");
	scanf(" %i",&opcion);

	switch(opcion){

	    case 1:
		capturar();

		break;
	    case 2:
		mostrartodo();

		break;
	    case 3:
		buscarEdad();
		break;
	    case 4:
		buscarNota();
		break;
	    case 5:
		salir();
		break;
	    default:
		printf("opcion incorreta vuelva a selecionar\n");
	}
    }while(opcion!=5);
}
int main(){

    menu();


    return EXIT_SUCCESS;
}
