#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//pendiente, agregar el valor del ticket

int autos_A1=0,moto_A1=0,camion_A1=0;
int autos_A2=0,moto_A2=0,camion_A2=0;
int autos_A1$=0,moto_A1$=0,camion_A1$=0;
int autos_A2$=0,moto_A2$=0,camion_A2$=0;
int nro_de_ticket=0,nro_de_autopista=0,categoria_v=0;
int dia=0,mes=0,anio=0,hora=0;
int valor_auto=50,valor_camion=100,valor_moto=25;
int A1=0,A2=0;
float porcentaje_v_auto=0.0,porcentaje_v_moto=0.0,porcentaje_v_camion=0.0;
/* variables auxiliares*/
int bandera=0,dia_aux=0,mes_aux=0,anio_aux=0,hora_aux=0,nro_de_ticket_aux=0,nro_de_autopista_aux=0,valor_aux=0;
int total_recaudado_A1=0,valor=0,total_recaudado_A2=0,total=0;
int main(int argc, char const *argv[])
{
    printf("ingrese numero de tickets:");
    scanf("%d",& nro_de_ticket);
    system("cls");
    while (nro_de_ticket!=0)
    {
        do
        {
        printf("ingrese numero de autopista:");
        scanf("%d",& nro_de_autopista);
        } while (nro_de_autopista<1 || nro_de_autopista>2);

        do
        {
        printf("\n ingrese categoria del vehiculo:");
        scanf("%d",&categoria_v);
        } while (categoria_v<1 || categoria_v>3);
        
        printf("\n ingrese fecha:");
        scanf("%d %d %d",&dia,&mes,&anio);

        printf("\n ingrese hora:");
        scanf("%d",&hora);
        switch (nro_de_autopista)
        {
        case 1:
         A1++;
         switch (categoria_v)
         {
           case 1:
             autos_A1++;
             autos_A1$+=valor_auto;
             total_recaudado_A1+=valor_auto;
             valor=valor_auto;
             break;
           case 2:
             moto_A1++;
             moto_A1$+=valor_moto;
             total_recaudado_A1+=valor_moto;
             valor=valor_moto;
             break;
           case 3:
             camion_A1++;
             camion_A1$+=valor_camion;
             total_recaudado_A1+=valor_camion;
             valor=valor_camion;
             break;
         }
            break;
        case 2:
         A2++;
         switch (categoria_v)
         {
           case 1:
             autos_A2++;
             autos_A2$+=valor_auto;
             total_recaudado_A2+=valor_auto;
             valor=valor_auto;
             break;
           case 2:
             moto_A2++;
             moto_A2$+=valor_moto;
             total_recaudado_A2+=valor_moto;
             valor=valor_moto;
             
             break;
           case 3:
             camion_A2++;
             camion_A2$+=valor_camion;
             total_recaudado_A2+=valor_camion;
             valor=valor_camion;
             break;
         }
            break;   
        }

       if (bandera==0)
       {
         dia_aux=dia;
         mes_aux=mes;
         anio_aux=anio;
         hora_aux=hora;
         nro_de_ticket_aux=nro_de_ticket;
         nro_de_autopista_aux=nro_de_autopista;
         valor_aux=valor;
         bandera=1;
       }else{
           if(hora_aux>hora)
           {
            dia_aux=dia;
            mes_aux=mes;
            anio_aux=anio;
            hora_aux=hora;
            nro_de_ticket_aux=nro_de_ticket;
            nro_de_autopista_aux=nro_de_autopista;
            valor_aux=valor;
           }
       }
       
       printf("\n ingrese numero de tickets:");
       scanf("%d",& nro_de_ticket);

    }
    system("cls");
    total=(total_recaudado_A1+total_recaudado_A2);
    printf("la recaudacion general es de: %d",total);

    if (A1>A2)
    {
        printf("\nen la autopista A1 pasaron mas vehiculos\n");
    }else{
        printf("\nen la autopista A2 pasaron mas vehiculos\n");
    }

    porcentaje_v_auto=(float)((autos_A1$+autos_A2$)*100/total);
    porcentaje_v_moto=(float)((moto_A1$+moto_A2$)*100/total);
    porcentaje_v_camion=(float)((camion_A1$+camion_A2$)*100/total);

    printf("\n el porcentaje de autos sobre el total es de $ %.2f",porcentaje_v_auto);
    printf("\n el porcentaje de motos sobre el total es de $ %.2f",porcentaje_v_moto);
    printf("\n el porcentaje de camiones sobre el total es de $ %.2f\n",porcentaje_v_camion);
    
    if (total_recaudado_A1>total_recaudado_A2)
    {
    printf("\nla autopista A1 es la mas rentable\n");
    }else{
        printf("\nla autopista A2 es la mas rentable\n");
    }
    
    printf("\nel primer ticket del dia se hizo a las %d y en la autopista %d\n\n",hora_aux,nro_de_autopista_aux);

    getch();
    return 0;
}
