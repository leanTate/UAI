#include <stdio.h>
#include <stdlib.h>

int aprobados=0,desaprobados=0,between=0,nota=0,total=0,totalNotas=0,notaA=0,notaD=0;
char nombre[15];
float promedio=0.0;
void colegio(){
    printf("ingrese nombre del alumno:");
    scanf("%s",&nombre);
    printf("ingrese nota del alumno:");
    scanf("%d",&nota);
    if (nota!=11)
    {
        totalNotas=totalNotas+nota;
        if (nota>6)
        {
            aprobados++;
            notaA=notaA+nota;
        }else{
            desaprobados++;
            notaD=notaD+nota;
        }
        if (nota>=4 && nota<=6)
        {
            between++;
        }
        total++;
        colegio();
    }
    
}

int main(int argc, char const *argv[])
{
    colegio();
    system("cls");
    system("color 02");
    printf("total de gente ingresada: %d\n",total);
    printf("los aprobados son: %d\n",aprobados);
    printf("los desaprobados son: %d\n",desaprobados);
    printf("los que se encuentran entre 4 y 6 son: %d\n",between);
    printf("el promedio de aprobados es: %2.f\n\n",(float)(notaA/total));
    system("pause");
    return 0;
}
