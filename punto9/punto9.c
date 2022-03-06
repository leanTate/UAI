#include <stdio.h>
#include <stdlib.h>
#define hora 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		int tiempo,sueldo;
	
	
	
	printf("ingrese las horas trabajadas: ");
	scanf("%d",&tiempo);
	

	sueldo=tiempo*hora;
	
	system("cls");
	printf("El sueldo total segun las horas trabajadas es: %d",sueldo);
	
	getch();
	
	
	
	
	return 0;
}
