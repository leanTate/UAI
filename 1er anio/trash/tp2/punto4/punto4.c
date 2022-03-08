#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int lado1,lado2,lado3,perimetro;
	
	
    printf("ingrese primer lado en cm ");
    scanf("%d",&lado1);
	
	printf("ingrese segundo lado en cm ");
    scanf("%d",&lado2);
    
    
    printf("ingrese tercer lado en cm ");
    scanf("%d",&lado3);
    system("cls");
    
	perimetro = lado1+lado2+lado3;
    
    printf("el perimetro es: %d cm",perimetro);
    
	getch();
	return 0;
}
