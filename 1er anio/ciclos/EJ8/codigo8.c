#include <stdio.h>
#include <stdlib.h>

int Temperatura=0,TemperaturaMayor=0,TemperaturaMenor=0,bandera=1;
char Seguir[1];
int main(int argc, char const *argv[])
{
    system("color 05");
    Seguir[1]='a';
    while (Seguir[1]=='a')
    {
        do
        {
            printf("ingrese un numero de temperatura=");
            scanf("%d",&Temperatura);
        } while (Temperatura>1000);
        
        if (bandera==1)
        {
        TemperaturaMayor=Temperatura;
        TemperaturaMenor=Temperatura;
        bandera=0;
        }
        if (Temperatura>TemperaturaMayor)
        {
        TemperaturaMayor=Temperatura;

        }
        if (Temperatura<TemperaturaMenor)
        {
        TemperaturaMenor=Temperatura;
        }
        printf("si desea seguir ingresando temperaturas ponga 'a'");
        scanf("%s",&Seguir[1]);
    }    

    printf("\nla temperatura mayor es: %d\n",TemperaturaMayor);
    printf("la temperatura menor es: %d\n\n",TemperaturaMenor);
    system("pause");
    return 0;
}
