#include <stdio.h>
#include <stdlib.h>

int contador=3,cat=0,SueldoAnalistaSenior=0,SueldoAnalistaJunior=0,SueldoProgramador=0,SueldoOperador=0,Depto=0,i=0,SueldoMayor=0,SueldoX=0,SueldoTotal=0;
int AcumuladorSdepto1=0,AcumuladorSdepto2=0,AcumuladorSdepto3=0;
int CantEmpleados1=0,CantEmpleados2=0,CantEmpleados3=0,CantEmpleados4=0,CantEmpleadosDepto1=0,CantEmpleadosDepto2=0,CantEmpleadosDepto3=0;
float Promedio1=0.0,Promedio2=0.0,Promedio3=0.0,Promedio4=0.0;
char Nombre[30];

void departamentos(){
    switch (Depto)
    {
    case 1:
        if (cat==1)
        {
            AcumuladorSdepto1+=85000;
        }else if (cat==2)
        {
            AcumuladorSdepto1+=40000;
        }else if (cat==3)
        {
            AcumuladorSdepto1+=65000;
        }else if (cat==4)
        {
            AcumuladorSdepto1+=30000;
        }
        CantEmpleadosDepto1++;
        break;
        case 2:
        if (cat==1)
        {
            AcumuladorSdepto2+=85000;
        }else if (cat==2)
        {
            AcumuladorSdepto2+=40000;
        }else if (cat==3)
        {
            AcumuladorSdepto2+=65000;
        }else if (cat==4)
        {
            AcumuladorSdepto2+=30000;
        }
        CantEmpleadosDepto2++;
        break;
    case 3:
        if (cat==1)
        {
            AcumuladorSdepto3+=85000;
        }else if (cat==2)
        {
            AcumuladorSdepto3+=40000;
        }else if (cat==3)
        {
            AcumuladorSdepto3+=65000;
        }else if (cat==4)
        {
            AcumuladorSdepto3+=30000;
        }
        CantEmpleadosDepto3++;
        break;
    }
}

void comparador(int SueldoX){
    if(SueldoX>SueldoMayor){
    SueldoMayor=SueldoX;
}
}
int main(int argc, char const *argv[])
{
    for ( i=0; i <contador; i++)
    {
        printf("ingrese nombre:");
        scanf("%s",Nombre);

        do
        {
            printf("ingrese categoria:");
            scanf("%d",& cat);
        } while (cat<1 && cat>4);

        do
        {
            printf("ingrese departamento en el que trabaja:");
            scanf("%d",&Depto);
        } while (Depto<1 && Depto>3);
        
        switch (cat)
        {
        case 1:
            SueldoAnalistaSenior+=85000;
            departamentos();
            comparador(SueldoAnalistaSenior);
            CantEmpleados1++;
            break;
        case 2:
            SueldoAnalistaJunior+=40000;
            departamentos();
            comparador(SueldoAnalistaJunior);
            CantEmpleados2++;
            break;
        case 3:
            SueldoProgramador+=65000;
            departamentos();
            comparador(SueldoProgramador);
            CantEmpleados3++;
            break;
        case 4:
            SueldoOperador+=30000;
            departamentos();
            comparador(SueldoOperador);
            CantEmpleados4++;
            break;
        default:
            break;
        }
}
system("cls");
SueldoTotal=SueldoAnalistaJunior+SueldoAnalistaSenior+SueldoProgramador+SueldoOperador;

if (SueldoAnalistaSenior>0)
{
    Promedio1=(float)SueldoAnalistaSenior/CantEmpleados1;
}
if (SueldoAnalistaJunior>0)
{
    Promedio2=(float)SueldoAnalistaJunior/CantEmpleados2;
}
if (SueldoProgramador>0)
{
    Promedio3=(float)SueldoProgramador/CantEmpleados3;
}
if (SueldoOperador>0)
{
    Promedio4=(float)SueldoOperador/CantEmpleados4;
}

system("color 02");
printf("el total de sueldos a pagar por departamento 1 es de: %d\n",AcumuladorSdepto1);
printf("el total de sueldos a pagar por departamento 2 es de: %d\n",AcumuladorSdepto2);
printf("el total de sueldos a pagar por departamento 3 es de: %d\n",AcumuladorSdepto3);
printf("el sueldo mayor es: %d\n",SueldoMayor);
printf("la categoria 1 tiene %d empleados\n",CantEmpleados1);
printf("la categoria 2 tiene %d empleados\n",CantEmpleados2);
printf("la categoria 3 tiene %d empleados\n",CantEmpleados3);
printf("la categoria 4 tiene %d empleados\n",CantEmpleados4);
printf("en el depto nro1 trabajan %d empleados\n",CantEmpleadosDepto1);
printf("en el depto nro2 trabajan %d empleados\n",CantEmpleadosDepto2);
printf("en el depto nro3 trabajan %d empleados\n",CantEmpleadosDepto3);
printf("el sueldo total es %d\n",SueldoTotal);
printf("el promedio de sueldos de la categoria 1 es: %.2f\n",Promedio1);
printf("el promedio de sueldos de la categoria 2 es: %.2f\n",Promedio2);
printf("el promedio de sueldos de la categoria 3 es: %.2f\n",Promedio3);
printf("el promedio de sueldos de la categoria 4 es: %.2f\n\n",Promedio4);
system("pause");
return 0;
}