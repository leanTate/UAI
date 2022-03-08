#include <stdio.h>
#include <stdlib.h>

int v1,v2,producto;

int main(int argc, char const *argv[])
{
    printf("ingrese valor 1:");
    scanf("%d",&v1);

    printf("ingrese valor 2:");
    scanf("%d",&v2);

    system("cls");

    if (v1>v2)
    {
    producto=(v1*v2);
    printf("el producto entre los dos es:%d \n\n",producto);

    }else{
        if (v1==v2)
        {
         printf("son iguales\n\n");
        }else{
            printf("el segundo valor es menor que el primero\n\n");
        }  
    }   
    system("pause");
    return 0;
}
