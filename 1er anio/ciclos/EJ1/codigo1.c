#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int C,N=0,SUM=0;
float PROM=0;

int main(int argc, char const *argv[])
{
    system("color 05");
    C=0;
    printf("ingrese sueldo:");
    scanf("%d",&N);
    while (N!=0)
    {
        printf("ingrese sueldo:");
        scanf("%d",&N);
        SUM=(SUM+N);
        C++;
        system("cls"); 
    }
    PROM=(float)(SUM/C);
    printf("\nla suma de todos los sueldos es: %d\n",SUM);
    printf("\nel promedio de todos los sueldos es %2f\n",PROM);
    system("pause");
    return 0;
}
