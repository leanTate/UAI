#include <stdio.h>
#include <stdlib.h>

int v1,v2;

int main(int argc, char const *argv[])
{ 
    printf("ingrese primer valor:");
    scanf("%d",&v1);

    printf("ingrese segundo valor:");
    scanf("%d",&v2);

    system("cls");

    if (v1==v2)
    {
      printf("son iguales\n\n");
    }
    else{
        printf("no son iguales\n\n");
    }
    system("pause");
    return 0;
}
