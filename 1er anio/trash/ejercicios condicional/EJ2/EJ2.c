#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
 int v1;
 printf("ingrese valor");
 scanf("%d",&v1);
 system("cls");

 if (v1==0) {
     printf("el valor es 0\n\n");
} else{
         if (v1>0){ 
         printf("es positivo \n\n");
        }else{
         printf("es negativo\n\n");
        }
} 

system("pause");
    return 0;
}
