#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	//		nombremayor=nombre;
			
			//utilizar la libreria String.h
			//strcpy(destino,origen)

// muestre el nombre y el sueldo del empleado de menor sueldo

int main(int argc, char *argv[]) 
{
	float sueldo, sueldomayor,sueldomenor;
	
	
	char nombre[25],nombremayor[25],nombremenor[25];
	
	int cantidad, bandera=1;
	
	for(cantidad=0;cantidad<5;cantidad++)
	{
		
		printf("\nIngrese el nombre del emplado %d ",cantidad + 1);
		fflush(stdin);
		gets(nombre);
		
		printf("\nIngrese el Sueldo del empleado %d ",cantidad+1);
		scanf("%f",&sueldo);
		
		//si es la primera vez que ingreso valores
		// bandera estará en 1
		
		if(bandera==1)
		{
			sueldomayor=sueldo;
			strcpy(nombremayor,nombre);
			sueldomenor=sueldo;
			strcpy(nombremenor,nombre);
			
			bandera=0;
//		    printf("\nIngrese a el IF de bandera 1 %d ",cantidad+1);

		}
		else
		{
			if(sueldomayor<sueldo)
			{
			sueldomayor=sueldo;
			strcpy(nombremayor,nombre);
			
			}
			
			if(sueldomenor>sueldo)
			{
			sueldomenor=sueldo;
			strcpy(nombremenor,nombre);
			
			}
	//			printf("\nIngrese a el IF de Mayoe Sueldo  %d ",cantidad+1);
		}
		
	}
	
	printf("\nEl sueldo mayor pertenece a %s \n con un importe de %.2f \n ",nombremayor,sueldomayor);
	printf("\nEl sueldo menor pertenece a %s \n con un importe de %.2f \n ",nombremenor,sueldomenor);
	system("pause");
	return 0;
}