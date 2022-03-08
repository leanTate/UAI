#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
 int tipoPoligono;

 int lado1,lado2,radio;

 int sup=0;

 float supf;

 printf("1 - Rectangulo \n");

 printf("2 - Triangulo \n");

 printf("3 - Circulo \n");

 do
{// evitar la carga de un valor incierto

 printf("Ingrese el tipo de Poligono:  ");

 scanf("%d", &tipoPoligono);

 printf("\n");

}
while(tipoPoligono<1 || tipoPoligono>3);


 switch(tipoPoligono)

{

 case 1:     // Superficie del rectangulo

 printf("Ingrese el lado 1 \n");

 scanf("%d", &lado1);

 printf("Ingrese el lado 2 \n");

 scanf("%d", &lado2);

 

 sup = lado1*lado2;

 //                printf("La superficie del rectangulo es %d \n", sup);

 break;

 case 2:  // superficie del triangulo

 printf("Ingrese el lado 1 \n");

 scanf("%d", &lado1);

 printf("Ingrese el lado 2 \n");

 scanf("%d", &lado2);

 

 sup= (lado1*lado2)/2;

 break;

 case 3:   // superficie del circulo

 printf("Ingrese el radio \n");

 scanf("%d", &radio);

 

 supf= (float) PI * (radio*radio);

 break;

 

 default:

 printf("El tipo no esta contemplado\n");

 

 break;

 

}

 

switch(tipoPoligono)

{

 case 1:

 printf("La superficie del rectangulo es %d \n", sup);

 break;

 case 2:

 printf("La superficie del Triangulo es %d \n", sup);

 break;

 case 3:

 printf("La superficie del Circulo es %.2f \n", supf);

 break;

 

}

//        printf("La superficie es %d \n");

 system("pause");

    return 0;
}
