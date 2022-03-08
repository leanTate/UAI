#include <stdio.h>
#include <stdlib.h>

int n1,n2,n3,n4,sum_1,sum_2;

int main(int argc, char const *argv[])
{
    printf("ingresar el primer numero:");
    scanf("%d", &n1);

        printf("ingresar el segundo numero:");
    scanf("%d", &n2);

        printf("ingresar el tercer numero:");
    scanf("%d", &n3);

        printf("ingresar el cuarto numero:");
    scanf("%d", &n4);

    system("cls");

    sum_1=(n1+n2);
    sum_2=(n3+n4);

    if (sum_1>sum_2)
    {
        printf(" la suma  mayor es %d+%d resultado=%d \n\n",n1,n2,sum_1);
    }else{
        printf(" la suma  mayor es %d+%d resultado=%d \n\n",n3,n4,sum_2);
    }

    system("pause");
    

     
    return 0;
}
