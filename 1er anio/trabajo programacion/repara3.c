#include <stdio.h>
#include <stdlib.h>
#define Mesas 4
#define Mozos 4

int main(int argc, char *argv[]){
	int restaurant[Mesas][Mozos]={0};
	float dinero[Mesas][Mozos]={0.0};
	int MESAS, MOZOS;
	//cargo las matrices
	for(MESAS=1;MESAS<=Mesas-1;MESAS++){
		for(MOZOS=1;MOZOS<=Mozos-1;MOZOS++){
		printf("\nIngrese la cantidad de Personas para la Mesa %d y el Mozo %d ",MESAS,MOZOS);
		scanf("%d",&restaurant[MESAS][MOZOS]);
		printf("\nIngrese la cantidad de dinero para la Mesa %d y el Mozo %d ",MESAS,MOZOS);
		scanf("%f",&dinero[MESAS][MOZOS]);
		dinero[MESAS][0]+=dinero[MESAS][MOZOS];//dinero-mesas
		dinero[0][MOZOS]+=dinero[MESAS][MOZOS];
		restaurant[MESAS][0]+=restaurant[MESAS][MOZOS];
		printf("\n--------------------------------------");
		printf("\nMesa: %d \t Facturó: %.2f  ",MESAS,dinero[MESAS][0]);
		printf("\nMozo: %d\t Facturo: %.2f  ",MOZOS,dinero[0][MOZOS]);
		printf("\n--------------------------------------\n");
		}
	}


printf("\n\n\n");

//Muestro los datos cargados
	for(MESAS=1;MESAS<=Mesas-1;MESAS++)
	{
		for(MOZOS=1;MOZOS<=Mozos-1;MOZOS++)
		{
			printf("\nMesa: %d Mozo: %d\t Cantidad: %d  ",MESAS,MOZOS,restaurant[MESAS][MOZOS]);
			printf("\nMesa: %d Mozo: %d\t Facturó: %.2f  ",MESAS,MOZOS,dinero[MESAS][MOZOS]);
		}
	}
printf("\n\n\n");
	
	//Muestro los datos cargados de dinero en cada mesa
	for(MESAS=1;MESAS<=Mesas-1;MESAS++)
	{
		printf("\nMesa: %d \t Facturó: %.2f  ",MESAS,dinero[MESAS][0]);
	}
printf("\n\n\n");
	
	//Muestro los datos cargados de dinero por cada mozo

	for(MOZOS=1;MOZOS<=Mozos-1;MOZOS++)
		{
			printf("\nMozo: %d\t Facturo: %.2f  ",MOZOS,dinero[0][MOZOS]);
		}
system("pause");
}