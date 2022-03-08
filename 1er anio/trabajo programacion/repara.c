#include <stdio.h>

#include <stdlib.h>

#define Mesas 3

#define Mozos 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) 

{
int MesaMozo[Mesas][Mozos]={0};
float MesaMozo1[Mesas][Mozos]={0.0};
int Me=0, Mo=0;
	for(Me=0;Me<=Mesas;Me++){
		for(Mo=0;Mo<=Mozos;Mo++){
			MesaMozo[Me][Mo]=0;
			MesaMozo1[Me][Mo]=0.0;
		}
	}

for(Me=1;Me<=Mesas;Me++)

	{

		for(Mo=1;Mo<=Mozos;Mo++)

		{

			printf("\nIngrese la cantidad de Personas para la Mesa %d y el Mozo %d ",Me,Mo);

			scanf("%d",&MesaMozo[Me][Mo]);

			printf("\nIngrese la cantidad de dinero para la Mesa %d y el Mozo %d ",Me,Mo);

			scanf("%f",&MesaMozo1[Me][Mo]);

		

			MesaMozo1[Me][0]+=MesaMozo1[Me][Mo];

			MesaMozo1[0][Mo]+=MesaMozo1[Me][Mo];

		

			printf("\n--------------------------------------");

			printf("\nMesa: %d \t Facturo: %.2f ",Me,MesaMozo1[Me][0]);

			printf("\nMozo: %d\t Facturo: %.2f ",Mo,MesaMozo1[0][Mo]);

			printf("\n--------------------------------------\n");

		}

	}



	printf("\n\n\n");

	

	//Muestro los datos cargados

	for(Me=1;Me<=Mesas;Me++)

	{

		for(Mo=1;Mo<=Mozos;Mo++)

		{

			printf("\nMesa: %d Mozo: %d\t Cantidad: %d ",Me,Mo,MesaMozo[Me][Mo]);

			printf("\nMesa: %d Mozo: %d\t Facturo: %.2f ",Me,Mo,MesaMozo1[Me][Mo]);

		}

	}

	

	printf("\n\n\n");

	

	//Muestro los datos cargados de dinero en cada mesa

	for(Me=1;Me<=Mesas;Me++)

	{

			printf("\nMesa: %d \t Facturo: %.2f ",Me,MesaMozo1[Me][0]);

	}

	

	printf("\n\n\n");

	

	//Muestro los datos cargados de dinero por cada mozo



	for(Mo=1;Mo<=Mozos;Mo++)

		{

			printf("\nMozo: %d\t Facturo: %.2f ",Mo,MesaMozo1[0][Mo]);

		}



	return 0;

}