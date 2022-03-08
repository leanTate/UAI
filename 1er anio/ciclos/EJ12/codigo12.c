#include <stdio.h>
#include <stdlib.h>

int Precio=0,caro=0,barato=0,promedio=0,sumadetodo=0,bandera=0,cantidad=0;
void comercio(){
    printf("ingrese precio de articulos(utilize '0' para salir):");
    scanf("%d",&Precio);
    if (Precio!=0)
    {
        if (bandera==0)
        {
            caro=Precio;
            barato=Precio;
            bandera=1;
        }
        sumadetodo=sumadetodo+Precio;
        if (Precio>caro)
        {
            caro=Precio;
        }else if (barato>Precio)
        {
            barato=Precio;
        }
        cantidad++;
        comercio();
    }
    
} 

int main(int argc, char const *argv[])
{
    comercio();
    system("cls");
    system("color 02");
    printf("el precio mas caro es: %d\n",caro);
    printf("el precio mas barato es: %d\n",barato);
    printf("el promedio de precios es %2.f\n\n",(float)(sumadetodo/cantidad));
    system("pause");
    return 0;
}
