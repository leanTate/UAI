/*                  _              _      _                  _          _          _                     */
/*                /\ \           /\ \   /\_\               /\ \       /\ \       / /\                    */        
/*               /  \ \         /  \ \ / / /         _    /  \ \     /  \ \     / /  \                   */       
/*              / /\ \_\       / /\ \ \\ \ \__      /\_\ / /\ \ \   / /\ \ \   /_/ /\ \                  */
/*             / / /\/_/      / / /\ \_\\ \___\    / / // / /\ \_\ / / /\ \ \  \_\/\ \ \                 */
/*            / / / ______   / / /_/ / / \__  /   / / // / /_/ / // / /  \ \_\      \ \ \                */
/*           / / / /\_____\ / / /__\/ /  / / /   / / // / /__\/ // / /   / / /       \ \ \               */
/*          / / /  \/____ // / /_____/  / / /   / / // / /_____// / /   / / /         \ \ \              */
/*         / / /_____/ / // / /\ \ \   / / /___/ / // / /      / / /___/ / /         __\ \ \___          */
/*        / / /______\/ // / /  \ \ \ / / /____\/ // / /      / / /____\/ /         /___\_\/__/\         */  
/*        \/___________/ \/_/    \_\/ \/_________/ \/_/       \/_________/          \_________\/         */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int i=0,numeros[9],numeroAbuscar=0,numero=0;
int j=0,p=0,aux=0;
void generadorDeNumeros(){
    for (i=0;i<9;i++){
		numeros[i]=rand() % 20; //valores entre 0 y 1000
    }
}

void burbujeo(){
        for (p=0;p<8;p++){
            for ( j=p+1; j< 9; j++){
                if (numeros[p]>numeros[j]){
                    aux=numeros[p];
                    numeros[p]=numeros[j];
                    numeros[j]=aux;
                }
            }
    }
}
/* metodo binario*/
void buscador1(){
    int mitad=0,buscar=0,a=0,b=10;
    bool flag=false;
    for ( j = 0; j < 9; j++){
        printf("\n%d\n",numeros[j]);
    }
    
    printf("que numero desea buscar entre 0 & 20?");
    scanf("%d",&numeroAbuscar);
    while (a<=b){
		mitad = (a + b) / 2;
		if(numeroAbuscar > 20){
			printf("Numero no encontrado\n");
			break;
		}
		if(numeroAbuscar == numeros[mitad]){
            system("cls");
            system("color 02");
			printf("\nNumero %d encontrado en posicion %d\n", numeros[mitad], mitad);
			flag=true;
			break;
		}else if(numeroAbuscar < numeros[mitad]){
			b = mitad -1;
			printf("\nEl valor de la posición %d es Mayor %d \t a: %d \t\t b: %d",mitad, numeros[mitad],a,b);
		}else{
			a = mitad + 1;
			printf("\nEl valor de la posición %d es Menor %d \t a: %d \t\t b: %d",mitad, numeros[mitad],a,b);	}		
	}
	if(flag==false){
        system("cls");
        system("color 04");
		printf("Numero no encontrado\n");
	}
}
/* metodo secunecial*/
void buscador2(){
    bool flag=false;

    for ( j = 0; j < 9; j++){
        printf("\n%d\n",numeros[j]);
    }

    printf("que numero desea buscar?");
    scanf("%d",&numeroAbuscar);
    for ( j = 0; j < 9; j++)
    {
        if (numeroAbuscar==numeros[j])
        {
            system("cls");
            system("color 02");
            printf("se ha encontrado el numero %d en la posicion: %d\n\n",numeros[j],j);
            flag=true;
            break;
        }
        
    }
    if (flag==false)
    {
        system("cls");
        system("color 04");
        printf("el dato a buscar no ha sido encontrado\n\n");
    }
    
}
int main(int argc, char const *argv[]){
    int metodo=0;
    generadorDeNumeros();
    burbujeo();
    do
    {
    printf("que metodo desea usar?\n (1) o (2)");
    scanf("%d",&metodo);
    } while (metodo!=1 && metodo!=2);
        if (metodo==1)
        {
            buscador1();
        }else{
            buscador2();
        }
    system("pause");
    return 0;
}
