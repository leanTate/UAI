#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	int a,num1,valor,cont;
	
	char l[2000];
a=0;

	printf("INGRESE NUMERO ");	
	scanf("%d",&num1);

system("cls");


	printf("Seleccione una opcion  \n\n 0:Resultado\n\n 1:Suma\n\n 2:Resta\n\n 3:Multiplicacion\n\n Seleccione su opcion: ");
	scanf("%d",&valor);

	
	do{

cont=cont+1;
	
	
switch(valor){
	case 1:
	system("cls");
	a=a+num1;
	printf("                                              R = %d \n\n",a);
		
	break;
		
		
	case 2:
		system("cls");
	a=a-num1;
		printf("                                              R = %d \n\n",a);
	
	break;	
	
	
	
	
		case 3:
			system("cls");
		
			
	a=a*num1;
	
	if(a==0){
		a=num1;
	}	
	
	printf("                                                R = %d \n\n",a);
		
	break;	
	
	case 0:
		system("cls");
		if(a=0){
	
	a=num1;
	}
		break;
	

}

if(cont>1){

	printf(" Seleccione una opcion  \n\n 0:Resultado\n\n 1:Suma\n\n 2:Resta\n\n 3:Multiplicacion \n\n Seleccione su opcion: ");
	scanf("%d",&valor);
}
if(valor!=0 && cont > 1){

		printf("INGRESE NUMERO ");	
	scanf("%d",&num1);
	printf("                                                R = %d \n \n",a);
}


}while(valor!=0);

system("cls");
	printf("RESULTADO: %d",a);
	


getch();

	return 0;
}
