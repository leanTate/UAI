#include <stdio.h>
#include <stdlib.h>

int nro_de_factura=0,importe=0,mayores_mil=0,mayores_diez_mil=0,between=0,suma_importe=0,cant_de_facturas=0;

int main(int argc, char const *argv[])
{
    system("color 05");
    printf("ingresar numero de factura:");
    scanf("%d",&nro_de_factura);
    while (nro_de_factura!=0)
    {
        printf("\n\ningresar importe:");
        scanf("%d",&importe);
        suma_importe=(suma_importe+importe);
        if (importe>1000)
        {
            mayores_mil++;
        }
        if (importe>10000)
        {
            mayores_diez_mil++;
        }
        if (importe<=700 && importe>=400)
        {
            between++;
        }
        printf("ingresar numero de factura:");
        scanf("%d",&nro_de_factura);

        cant_de_facturas++;
    };

    printf("\n\n la cantidad de facturas total es:%d", cant_de_facturas);
    printf("\n\n la suma de todos los importes es: %d",suma_importe);
    printf("\n\n la cantidad de facutras que superan los 1000 son: %d",mayores_mil);
    printf("\n\n la cantidad de facutras que superan los 10000 son: %d",mayores_diez_mil);
    printf("\n\n la cantidad de facutras que estan entre 400 y 700 son: %d\n\n",between);
    system("pause");
    return 0;
}
