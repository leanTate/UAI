#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1,num2,num3,suma;
	
	
	printf("ingrese primer numero ");
	scanf("%d",&num1);
	
	printf("ingrese segundo numero ");
	scanf("%d",&num2);
	
	printf("ingrese tercer numero ");
	scanf("%d",&num3);
	
	system("cls");
	
	suma=num1+num2+num3;
	
	
	
	printf("El resultado es: %d",suma);
	
	getch();
	
	return 0;
}
