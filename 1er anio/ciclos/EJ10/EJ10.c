#include <stdlib.h>
#include<stdio.h>
#include <conio.h>
#include <string.h>

int edad, edadMayor=0, contadorEdad= 0, contadorEstatura= 0, contadorPersonas= 0;
float altura, edadPromedio=0, alturaPromedio = 0, estaturaMenor=0;

void EdadEstatura(){
    printf("Ingresa tu edad por favor:");
    scanf("%d", &edad);
    if(edad != 0){

        printf("\nIngresa tu estatura por favor:");
        scanf("%f", &altura);

        contadorEdad = contadorEdad + edad; 
        contadorEstatura = contadorEstatura + altura;
        contadorPersonas++;

        if(edad > edadMayor){
            edadMayor = edad;
        }

        if(estaturaMenor == 0){
            estaturaMenor = altura;
        }else if(altura < estaturaMenor){
            estaturaMenor = altura;
        }
        EdadEstatura();
    }
}

int main(int argc, char const *argv[])
{
    printf("Bienvenidos alumnos\n");

    EdadEstatura();
    edadPromedio = contadorEdad/contadorPersonas;
    alturaPromedio = contadorEstatura/contadorPersonas;
    printf("La edad del mayor es: %d\n", edadMayor);
    printf("La estatura del menor es: %f\n", estaturaMenor);
    printf("La edad promedio es: %f\n", edadPromedio);
    printf("La edad promedio es: %f\n", alturaPromedio);
    system("pause");
    return 0;
}