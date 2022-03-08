#include <stdio.h>
#include <stdlib.h>

int destinos=0,clase=0,ticket=1,ContTurista=0,ContadorPullman=0,ContBoletos=0,AcumuladorTurista=0,AcumuladorPullman=0;
int ContMDQ=0,ContNec=0,ContBH=0;
int ContadorPullmanN=0,destinoMayor=0,sumaboletos=0;
float promedioBoletos;
void class(){
    do
    {
        printf("ingrese la clase en la que desea viajar:\nTurista:1\nPullman:2\n");
        scanf("%d",&clase);
    } while (clase!=1 && clase!=2);

    switch (clase)
    {
    case 1:
        ContTurista+=1;
        AcumuladorTurista+=25;
        break;
    case 2:
        AcumuladorPullman+=40;
        ContadorPullman+=1;
        if (destinos==2)
        {
            ContadorPullmanN+=1;
        }
        break;
    }
}

void comparador(int destinoX){
    if(destinoX>destinoMayor){
    destinoMayor=destinoX;
}
}

void viajes(){
    printf("ingrese un numero de ticket 'si ingresa 0 se detiene el proceso'");
    scanf("%d",&ticket);
    if (ticket!=0)
    {
        printf("ingrese destino:\nMar del plata:1\nNecochea:2\nBahia Blanca:3\n");
        scanf("%d",&destinos);
        switch (destinos)
        {
        case 1:
            class();
            ContMDQ+=1;
            comparador(ContMDQ);
            break;
        case 2:
            class();
            ContNec+=1;
            comparador(ContNec);
            break;
        case 3:
            class();
            ContBH+=1;
            comparador(ContBH);
            break;
        }
        ContBoletos=ContBoletos+1;        
        viajes();
    }
}
void lugarsolicitado(){
    if (destinoMayor==ContMDQ)
    {
        printf("el destino mas solcitado es Mar Del Plata\n");
    }else if (destinoMayor==ContNec)
    {
        printf("el destino mas solcitado es Necochea\n");
    }else if (destinoMayor==ContBH)
    {
        printf("el destino mas solcitado es Bahia Blanca\n");
    }
}

int main(int argc, char const *argv[])
{
    viajes();
    sumaboletos=AcumuladorTurista+AcumuladorPullman;
    promedioBoletos=(float)(sumaboletos/ContBoletos);
    system("cls");
    system("color 02");
    printf("la cantidad total de boletos vendidos es: %d\n",ContBoletos);
    printf("el promedio de valor de boletos vendidos es: %.2f\n",promedioBoletos);
    printf("el procentaje de boletos vendidos en Pullman es: %.2f\n",(float)ContadorPullman*100/ContBoletos);
    printf("el procentaje de boletos vendidos en Turista es: %.2f\n",(float)ContTurista*100/ContBoletos);
    printf("a necochea se vendieron: %d boletos de clase Pullman\n",ContadorPullmanN);
    lugarsolicitado();
    system("pause");
    return 0;
}
