#include <stdio.h>
#include <stdlib.h>

int e1,e2;
float a1,a2;

int main(int argc, char const *argv[])
{
    printf("ingrese la edad del sujeto 1:");
    scanf("%d", &e1);

    printf("ingrese la altura del sujeto 1 en cm (indicar decimal con '.'):");
    scanf("%f", &a1);

    printf("ingrese la edad del sujeto 2:");
    scanf("%d", &e2);

    printf("ingrese la altura del sujeto 2 en cm (indicar decimal con '.':");
    scanf("%f", &a2);

    system("cls");

    if (e1>e2)
    {
        printf("La estatura del sujeto de mayor edad es: %f \n\n",a1);
    }else{
         printf("La estatura del sujeto de mayor edad es: %f \n\n",a2);
    }

    system("pause");
    return 0;
}

