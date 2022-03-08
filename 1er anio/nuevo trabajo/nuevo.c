#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float EmpMes[5][4];//[0=total 1=legajo,2=cantidad de horas 3=valor de hora,4=mes 5=sueldo anual]
int Empresa[5][4]={0};
int legajo[5];
int HorasT[5][3];
float ValorH[5][3];


int Legajo=0,CantHoras=0,ValorHora=0,Mes=0,emp=0,sue=0;
char nombres[5][20];

void carga(){  
    int nemp=0;
    printf("\nIngrese un Número de empleado");scanf("%d",&nemp);
    int hor,mes;
    float VH;
    int cual = 0;
    while (nemp!=0)
    {
        cual ++;
        printf("\n Horas %d \t"); scanf("%d",&hor);
        prinf("\n Valor %d \t"); scanf("%f",&VH);
        printf("\n Mes %d \t"); scanf("%d",&mes);  
        printf("\n Nombre %d \t"); scanf("%d",&nombres);  
        strcpy(nombres[cual],nombres);
        Empresa[cual][mes]=VH*hor;
        printf("\nIngrese un Número de empleado");scanf("%d",&nemp);
    }
}
void SueldoAnual(){
    int suma=0;
    int A,B;
    for (A=1;A<5;A++){
        for (B=1;B<4;B++){
            suma+=Empresa[A][B];
        }
    }
    printf("sueldo anual = %d",suma);
}
void TotalMes(){
    int a,b;

    float importe=0.0;
    for (a=1;a<=3;a++)
    {
        for(b=1;b<=5;b++)
            {
                importe +=Empresa[a][b]; 
            }
        printf("\nImporte Mes %d : \t %.2f", a, importe);
        importe = 0;
    }
    
}
void  MaxSueldo(){
    
}
void PorcSueTot(){

}
int main(int argc, char const *argv[]){
    carga();
    SueldoAnual();
    TotalMes();
    MaxSueldo();
    PorcSueTot();
    
    return 0;
}
