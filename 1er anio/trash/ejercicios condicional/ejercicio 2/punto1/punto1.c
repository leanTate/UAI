#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1,num2,r;
	
	
	printf("ingresar primer valor ");
	scanf("%d",&num1);
	
	printf("ingresar segundo valor ");
	scanf("%d",&num2);
	system("cls");
	r=num1+num2;
	
	printf("el resultado es: %d",r);
	
	getch();
	
	return 0;
}
