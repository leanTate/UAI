#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int valores=0,cant_ceros=0,seguir=0,positivos=0,negativos=0,total=0;
int valores_positivos=0,valores_negativos=0;
float prom_positivos=0,prom_negativos=0;

int main(int argc, char const *argv[])
{
    while (seguir!=1)
    {
        printf("ingresar valores=");
        scanf("%d",&valores);
        if (valores>0)
        {
            positivos++;
            valores_positivos=valores_positivos+valores;
        }else if (valores==0)
        {
            cant_ceros++;
        }else
        {
            negativos++;
            valores_negativos=valores_negativos+valores;
        }
        total++;
        printf("desea seguir poniendo valores('0'para seguir o '1' para parar):");
        scanf("%d",&seguir);
    }
    prom_positivos=(float)(valores_positivos/total);
    prom_negativos=(float)(valores_negativos/total);

    printf("cantidad de 0= %d\n",cant_ceros);
    printf("el promedio de positivos es = %.6f\n",prom_positivos);
    printf("\nel promedio de negativos es = %.6f\n\n",prom_negativos);
    printf("n%d",negativos);
    printf("p%d",positivos);
    system("pause");
    return 0;
}