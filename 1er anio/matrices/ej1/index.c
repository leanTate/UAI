#include <stdio.h>
#include <stdlib.h>
#define  analistas 4
void nombres(){
    char Nombre [analistas][20]{};
    float ValorHora[analistas]{};
    int Cant_Nombres;
    for (Cant_Nombres = 0; Cant_Nombres < analistas; Cant_Nombres++)
    {
        printf("\n ingrese el nombre del analista %d",Cant_Nombres);scanf("%s",&Nombre[Cant_Nombres]);
        printf("\n ingrese el valor de la hora del analista %d",Cant_Nombres);scanf("%f",ValorHora[Cant_Nombres]);
    }
    
}

int main(int argc, char const *argv[])
{
    nombres();
    return 0;
}
