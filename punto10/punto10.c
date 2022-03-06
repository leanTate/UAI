#include <stdio.h>
#include <stdlib.h>

#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int i,preciov,sueldof,cant,totalv,comision,sueldoi;
	comision=50;
	sueldoi=500;
	
		printf("cantidad de vehiculos a ingresar ");
	scanf("%d",&cant);
	system("cls");
for(i=0;i<cant;i++){

	
	printf("precio del vehiculo vendido ");
	scanf("%d",&preciov);
	
	totalv=totalv+preciov;
	
}

sueldof=sueldof+sueldoi+comision*cant+totalv*10/100;

system("cls");

printf("el sueldo final es: %d",sueldof);
	
getch();

	
	
	
	
	return 0;
}
