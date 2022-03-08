#include <stdio.h>
#include <stdlib.h>

int n1,n2,n3,prom,n_sum;

int main(int argc, char const *argv[])
{
    printf("ingresar primer valor:");
    scanf("%d", &n1);

    printf("ingresar segundo valor:");
    scanf("%d", &n2);

    printf("ingresar tercer valor:");
    scanf("%d", &n3);

    system("cls");

    n_sum=(n1+n2+n3);

    prom=(n_sum/3);

    if (prom<n1)
    {
        printf("el numero mayor es:%d \n\n",n1);
    }else if (prom<n2)
    {
       printf("el numero mayor es:%d \n\n",n2); 
    }else if (prom<n3)
    {
     printf("el numero mayor es:%d \n\n",n3);  
    }
    system("pause");

    return 0;
}
