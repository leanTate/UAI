#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int lado1,lado2,d,perimetro,superficie,cont;
	
	do{
		system("cls");

 if(lado1==lado2 && cont>=1){
    	printf("Los lados no pueden ser iguales\n\n");
	}		
    printf("ingrese primer lado en cm ");
    scanf("%d",&lado1);
	
	printf("ingrese segundo lado en cm ");
    scanf("%d",&lado2);
    
   cont=cont+1;
    
}while(lado1==lado2);
    
    
     system("cls");
    
    d=lado1*lado1+lado2*lado2;
    
    d=sqrt(d);
    
    superficie=lado1*lado2;
    
	perimetro = lado1*2+lado2*2;
	
	
	
	printf("RESULTADOS \n\n");
    
     printf("La Diagonal es: %dcm \n\n",d);
     
    printf("La Superficie es: %dcm^2 \n\n",superficie);
    
	printf("el perimetro es: %dcm",perimetro);
	
	getch();
	return 0;
}
