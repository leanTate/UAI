#include <stdio.h>
#include <stdlib.h>

int v1,v2,rest; 

int main(int argc, char const *argv[])
{
    printf("ingrese primer valor:");
    scanf("%d",&v1);

    printf("ingrese segundo valor:");
    scanf("%d",&v2);

    system("cls");

    if (v1>v2)
    {
    rest=(v1-v2);
    printf("La resta es de:%d \n\n",rest);
    }else{
        rest=(v2-v1);
        printf("La resta es de:%d \n\n",rest);
     }
     system("pause");
 return 0;
}
