#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define servicio 5
int edificios=0;
int gastos_edicio[5][5];
int servicios[servicio][5];
int Nro_de_factura=0,Codigo_del_proveedor=0,Monto_de_facturas=0,MayorGasto=0,Nro_de_depto=5;
int contador[5];
int edificio=0,provedor=0;
int AcumuladorGastoTotal[25];
float expensa[5];
int promedio;

void comparador(int GastoX, int edificioX, int proveedorX){
    if(GastoX>MayorGasto){
    MayorGasto=GastoX;
    edificio=edificioX;
    provedor=proveedorX;
    }
}

void services(){
    do{
    printf("codigos de proveedor:\n[1]ascensorista\n[2]electricista\n[3]pintor\n[4]plomero\n[5]limpieza");
    printf("\ningrese codigo del proveedor:");scanf("%d",&Codigo_del_proveedor);
    } while (Codigo_del_proveedor>5 || Codigo_del_proveedor==0);
    
    switch (Codigo_del_proveedor)
    {
    case 1:
        contador[1]+=1;
        if (edificios==1){
            gastos_edicio[1][1]+=500;
            gastos_edicio[0][1]+=500;
            printf("%d",gastos_edicio[1][0]);
            comparador(gastos_edicio[1][1],1,1);
        };
        if (edificios==2){
            gastos_edicio[1][2]+=500;
            gastos_edicio[0][2]+=500;
            comparador(gastos_edicio[1][2],2,1);
        };
        if (edificios==3){
            gastos_edicio[1][3]+=500;
            gastos_edicio[0][3]+=500;
            comparador(gastos_edicio[1][3],3,1);
        };
        if (edificios==4){
            gastos_edicio[1][4]+=500;
            gastos_edicio[0][4]+=500;
            comparador(gastos_edicio[1][4],4,1);
        };
        if (edificios==5){
            gastos_edicio[1][5]+=500;
            gastos_edicio[0][5]+=500;
            comparador(gastos_edicio[1][5],5,1);
        };
        break;
    case 2:
        contador[2]+=1;
        if (edificios==1){
            gastos_edicio[2][1]= gastos_edicio[2][1]+700;
            gastos_edicio[0][1]+=700;
            comparador(gastos_edicio[2][1],1,2);
        };
        if (edificios==2){
            gastos_edicio[2][2]+=700;
            gastos_edicio[0][2]+=700;
            comparador(gastos_edicio[2][2],2,2);
        };
        if (edificios==3){
            gastos_edicio[2][3]+=700;
            gastos_edicio[0][3]+=700;
            comparador(gastos_edicio[2][3],3,2);
        };
        if (edificios==4){
            gastos_edicio[2][4]+=700;
            gastos_edicio[0][4]+=700;
            comparador(gastos_edicio[2][4],4,2);
        };
        if (edificios==5){
            gastos_edicio[2][5]+=700;
            gastos_edicio[0][5]+=700;
            comparador(gastos_edicio[2][5],5,2);
        };
        break;
    case 3:
        contador[3]+=1;
        if (edificios==1){
            gastos_edicio[3][1]+=800;
            gastos_edicio[0][1]+=800;
            comparador(gastos_edicio[3][1],1,3);
        };
        if (edificios==2){
            gastos_edicio[3][2]+=800;
            gastos_edicio[0][2]+=800;
            comparador(gastos_edicio[3][2],2,3);
        };
        if (edificios==3){
            gastos_edicio[3][3]+=800;
            gastos_edicio[0][3]+=800;
            comparador(gastos_edicio[3][3],3,3);
        };
        if (edificios==4){
            gastos_edicio[3][4]+=800;
            gastos_edicio[0][4]+=800;
            comparador(gastos_edicio[3][4],4,3);
        };
        if (edificios==5){
            gastos_edicio[3][5]+=800;
            gastos_edicio[0][5]+=800;
            comparador(gastos_edicio[3][5],5,3);
        };
        break;
    case 4:
        contador[4]+=1;
        if (edificios==1){
            gastos_edicio[4][1]+=300;
            gastos_edicio[0][1]+=300;
            comparador(gastos_edicio[4][1],1,4);
        };
        if (edificios==2){
            gastos_edicio[4][2]+=300;
            gastos_edicio[0][2]+=300;
            comparador(gastos_edicio[4][2],2,4);
        };
        if (edificios==3){
            gastos_edicio[4][3]+=300;
            gastos_edicio[0][3]+=300;
            comparador(gastos_edicio[4][3],3,4);
        };
        if (edificios==4){
            gastos_edicio[4][4]+=300;
            gastos_edicio[0][4]+=300;
            comparador(gastos_edicio[4][4],4,4);
        }; 
        if (edificios==5){
            gastos_edicio[4][5]+=300;
            gastos_edicio[0][5]+=300;
            comparador(gastos_edicio[4][5],5,4);
        };
        break;
    case 5:
        contador[5]+=1;
        if (edificios==1){
            gastos_edicio[5][1]+=1000;
            gastos_edicio[0][1]+=1000;
            comparador(gastos_edicio[5][1],1,5);
        };
        if (edificios==2){
            gastos_edicio[5][2]+=1000;
            gastos_edicio[0][2]+=1000;
            comparador(gastos_edicio[5][2],2,5);
        };
        if (edificios==3){
            gastos_edicio[5][3]+=1000;
            gastos_edicio[0][3]+=1000;
            comparador(gastos_edicio[5][3],3,5);
        };
        if (edificios==4){
            gastos_edicio[5][4]+=1000;
            gastos_edicio[0][4]+=1000;
            comparador(gastos_edicio[5][4],4,5);
        };
        if (edificios==5){
            gastos_edicio[5][5]+=1000;
            gastos_edicio[0][5]+=1000;
            comparador(gastos_edicio[5][5],5,5);
        };
        break;
    }
    int continuar;
    do
    {
    printf("desea-continuar?[0]=si [1]=no:");scanf("%d",&continuar);
    } while (continuar>1);
    
    if (continuar==0)
    {
    services();
    }
    
}
void comparadorT(){
    if (contador[1]==0){
        printf("\nel proveedor 1 no trabajo en ningun edificio");
    }
    if (contador[2]==0){
        printf("\nel proveedor 2 no trabajo en ningun edificio");
    }
    if (contador[3]==0){
        printf("\nel proveedor 3 no trabajo en ningun edificio");
    }
    if (contador[4]==0){
        printf("\nel proveedor 4 no trabajo en ningun edificio");
    }
    if (contador[5]==0){
        printf("\nel proveedor 5 no trabajo en ningun edificio");
    }
}

void expensas(){
    expensa[1]=gastos_edicio[0][1]/Nro_de_depto;
    expensa[2]=gastos_edicio[0][2]/Nro_de_depto;
    expensa[3]=gastos_edicio[0][3]/Nro_de_depto;
    expensa[4]=gastos_edicio[0][4]/Nro_de_depto;
    expensa[5]=gastos_edicio[0][5]/Nro_de_depto;
    printf("\nlas expensas del edificio 1 fueron:%.2f pesos",expensa[1]);
    printf("\nlas expensas del edificio 2 fueron:%.2f pesos",expensa[2]);
    printf("\nlas expensas del edificio 3 fueron:%.2f pesos",expensa[3]);
    printf("\nlas expensas del edificio 4 fueron:%.2f pesos",expensa[4]);
    printf("\nlas expensas del edificio 5 fueron:%.2f pesos",expensa[5]);
}   

void promedioF(){
    Monto_de_facturas=(gastos_edicio[0][1]+gastos_edicio[0][2]+gastos_edicio[0][3]+gastos_edicio[0][4]+gastos_edicio[0][5]);
    promedio=Monto_de_facturas/contador[0];
    printf("\nel valor promedio de las facturas es de %d\n\n",promedio);
}

int main(int argc, char const *argv[])
{
    printf("ingrese numero de factura de factura:");scanf("%d",&Nro_de_factura);
    while (Nro_de_factura!=0){
        contador[0]++;
        do
        {
        printf("\ningrese numero de edificio:");scanf("%d",&edificios);
        } while (edificios==0 || edificios>5);
        
        switch (edificios){
        case 1:
            services();
            break;
        case 2:
            services();
            break;
        case 3:
            services();
            break;
        case 4:
            services();
            break;
        case 5:
            services();
            break;
        
        default:
            break;
        }
        printf("ingrese numero de factura de factura:");scanf("%d",&Nro_de_factura);
    }
    system("cls");
    system("color 02");
    printf("\nlos gastos del edificio 1 fueron:%d pesos",gastos_edicio[0][1]);
    printf("\nlos gastos del edificio 2 fueron:%d pesos",gastos_edicio[0][2]);
    printf("\nlos gastos del edificio 3 fueron:%d pesos",gastos_edicio[0][3]);
    printf("\nlos gastos del edificio 4 fueron:%d pesos",gastos_edicio[0][4]);
    printf("\nlos gastos del edificio 5 fueron:%d pesos",gastos_edicio[0][5]);
    printf("\nel gasto mayor es: %d,edificio nro: %d,del servicio nro:%d",MayorGasto,edificio,provedor);
    expensas();
    comparadorT();
    promedioF();
    system("pause");
    return 0;
}
