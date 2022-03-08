#include <stdio.h>
#include <stdlib.h>

int NrodeAuto=0,bandera=0,Ganador=0,ultimo=0;
float TiempoDeAuto=0.0,TiempoDeAutoMayor=0.0,TiempoDeAutoMenor=0.0;

void carrera(){
    printf("ingrese numero de auto(si desea salir ingrese 0):");
    scanf("%d",&NrodeAuto);
    if (NrodeAuto!=0)
    {
        printf("\ningrese tiempo del auto:");
        scanf("%f",&TiempoDeAuto);
        if (bandera==0)
        {
            Ganador=NrodeAuto;
            TiempoDeAutoMayor=TiempoDeAuto;
            TiempoDeAutoMenor=TiempoDeAuto;
            ultimo=NrodeAuto;
            bandera=1;
        }
        if (TiempoDeAutoMayor<TiempoDeAuto)
        {
            Ganador=NrodeAuto;
        }else if (TiempoDeAutoMenor>TiempoDeAuto)
        {
            ultimo=NrodeAuto;
        }
        
        carrera();
    }
    

}

int main(int argc, char const *argv[])
{
    carrera();
    system("cls");
    system("color 02");
    printf("el ganador es el nro: %d\n",Ganador);
    printf("el ultimo es el nro: %d\n\n",ultimo);
    system("pause");
    return 0;
}
