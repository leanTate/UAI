#include <stdio.h>
#include <stdlib.h>
int num=0,cont=0,sum=0;
float prom=0;
int main(int argc, char const *argv[])
{
    system("color 05");
    printf("ingresar numeros a sumar (para salir ingresar el valor 0):");
    scanf("%d",&num);
    while (num!=0)
    {
        sum=(sum+num);
        cont++;
        printf("ingresar numeros a sumar:");
        scanf("%d",&num);
        system("cls");
    }
    system("cls");
    prom=(float)(sum/cont);
    printf("\nel total de los numeros sumados es de: %d\n",sum);
    printf("\nel promedio de numeros ingresados es de: %2f\n",prom);
    printf("\nel total de numeros ingresados es de: %d\n\n",cont);
    system("pause");
    return 0;
}
