#include <stdio.h>
#include <stdlib.h>

int s,c,a,add;

int main(int argc, char const *argv[])
{
    printf("ingresar sueldo del empleado:");
    scanf("%d", &s);

    printf("ingresar categoria del empleado:");
    scanf("%d", &c);

    printf("ingresar antiguedad del empleado:");
    scanf("%d", &a);

    system("cls");

    if (c==1)
    {
        add=a*50;
        s=s+add;
        if (a>=5)
        {
             printf("el sueldo final del empleado es %d\n\n",s);
        }
        
    }else if (a>=5)
    {
         printf("el sueldo final del empleado es %d\n\n",s);
    }
    

    system("pause");
    return 0;
}
