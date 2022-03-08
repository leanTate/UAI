#include <stdio.h>
#include <stdlib.h>

int h,c,sueldo;

int main(int argc, char const *argv[])
{
    printf("ingresar categoria del empleado:");
    scanf("%d", &c);

    printf("ingresar horas de trabajo del empleado:");
    scanf("%d", &h);

    system("cls");

    switch (c)
    {
    case 1:

     sueldo=50*h;
     printf("el sueldo final del empleado es %d\n\n",sueldo);
        
      break;
    
    case 2:

     sueldo=70*h;
     printf("el sueldo final del empleado es %d\n\n",sueldo);

     break;

    case 3:
     
     sueldo=80*h;
     printf("el sueldo final del empleado es %d\n\n",sueldo);

     break;
    }
    

    system("pause");
    return 0;
}
