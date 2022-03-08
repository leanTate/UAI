#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int cont,lado1,lado2,h,perimetro,superficie;
	
	do{
		system("cls");
	
		
		if(lado1!=lado2 && cont>=1){
			printf("Los lados tienen que ser iguales \n\n");
		}
			cont=cont+1;
    printf("ingrese primer lado en cm ");
    scanf("%d",&lado1);
	
	printf("ingrese segundo lado en cm ");
    scanf("%d",&lado2);
    
}while(lado1!=lado2);
     system("cls");
    
    h=lado1*lado1+lado2*lado2;
    
    h=sqrt(h);
    
    superficie=lado1*lado2/2;
    
	perimetro = lado1+lado2+h;
	
	printf("RESULTADOS \n\n");
    
    printf("La hipotenusa es: %dcm \n\n",h);
    
    printf("La Superficie es: %dcm^2 \n\n",superficie);
    
	printf("el perimetro es: %dcm",perimetro);
    
	getch();
	
	
	
	return 0;
}
