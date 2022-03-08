#include <stdlib.h>
#include <stdio.h>

/*                                _ 
  __ _ _ __ _   _ _ __   ___   / |
 / _` | '__| | | | '_ \ / _ \  | |
| (_| | |  | |_| | |_) | (_) | | |
 \__, |_|   \__,_| .__/ \___/  |_|
 |___/           |_|      */      


int numero[]={7,9,23,67,12,90,45,34,65,11,66,22,21,99,100,123,141,72,80};
int i=0,j=0,aux;
int main(int argc, char const *argv[])
{
    for (i = 0; i < 18; i++)
    {
        for ( j=i+1; j< 19; j++)
        {
            if (numero[i]>numero[j])
            {
                aux=numero[i];
                numero[i]=numero[j];
                numero[j]=aux;
            }
            
        }
        
    }
    system("color 02");
    for (i = 0; i < 19; i++){
        printf("\n%d\n",numero[i]);
    }
    system("pause");
    return 0;
}
