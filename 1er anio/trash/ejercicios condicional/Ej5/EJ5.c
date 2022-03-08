#include <stdio.h>
#include <stdlib.h>
int l1,l2,l3;

int main(int argc, char const *argv[])
{
    printf("ingrese lado 1 del triangulo:");
    scanf("%d",&l1);

    printf("ingrese lado 2 del triangulo:");
    scanf("%d",&l2);

    printf("ingrese lado 3 del triangulo:");
    scanf("%d",&l3);

    system("cls");

    if (l1==l2 && l2==l3)
    {
    printf("es un triangulo equilatero \n\n");
    }else if (l1==l2 && l2!=l3)
    {
        printf("es un triangulo isoseles\n\n");

    }else if (l1!=l2 && l2==l3)
    {
        printf("es un triangulo isoseles\n\n");
    }else if (l1==l3 && l3!=l2)
    {
        printf("es un triangulo isoseles\n\n");
    }else{
        printf("es un triangulo escaleno\n\n");
    }
    
    system("pause");
    return 0;
}

