#include <stdio.h>
#include <stdlib.h>

int V,H,sueldo,sueldo_2;

int main(int argc, char const *argv[])
{
    printf("ingrese valor de la hora del empleado:");
    scanf("%d", &V);

    printf("ingrese cantidad de horas trabajadas del empleado:");
    scanf("%d", &H);

    system("cls");
    
    sueldo=V*H;

    if (H>50 && H<150)
    {
        sueldo=sueldo+100;
        printf("el sueldo total del empleado es :%d \n\n",sueldo);
    }else if (H>150)
    {
        sueldo=sueldo+200;
        printf("el sueldo total del empleado es :%d \n\n",sueldo);
    }else{
        printf("el sueldo total del empleado es :%d \n\n",sueldo);
    }

    

    system("pause");
    return 0;
}
