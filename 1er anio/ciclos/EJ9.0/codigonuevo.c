#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
//Datos de entrada
int Categoria=0,Antiguedad=0,SueldoPromedioGeneral=0,Categoria1Cont=0,Categoria2Cont=0,Categoria3Cont=0,i,cantidaem,adporantiguedad,TotalSueldos=0,importe=0,bandera=1;
float PorcentajeCategoria1=0.0,PorcentajeCategoria2=0.0,PorcentajeCategoria3=0.0,Acum1=0.0,Acum2=0.0,Acum3=0.0,SueldoMaximo=0.0;
char nombre[30],nombreSueldoMaximo[30];
int main(void) 
{
  printf("\nIngrese la cantidad de empleados que desea ingresar ");
  scanf("%d",&cantidaem);
  
  system("cls");
  
  for(i=0;i<cantidaem;i++)
  {
    printf("\n Ingrese nombre: ");
        fflush(stdin);
        gets(nombre);
        fflush(stdin);

    printf("\n Ingrese la antiguedad: ");
    scanf("%d",&Antiguedad);

  do
  {
    printf("\n Ingrese la categoria: ");
    scanf("%d",&Categoria);
  }while(Categoria<1 || Categoria>3);
   
    switch(Categoria)
    {
      case 1:
      if(Antiguedad>20)
      {
        adporantiguedad = 1500*.40;  
      }else if(Antiguedad<=20 && Antiguedad>15)
      {
        adporantiguedad = 1500*.20;
      }else if(Antiguedad<=15 && Antiguedad>10)
      {
        adporantiguedad = 1500*.15;  
      }else if(Antiguedad<=10 && Antiguedad>5)
      {
        adporantiguedad = 1500*.10;  
      }else if(Antiguedad<=5)
      {
        adporantiguedad = 1500*.05;
      }
			importe = 1500+adporantiguedad;
      Categoria1Cont++;
      Acum1+=importe;
      break;
      case 2:
			importe = 2000+adporantiguedad;
      Categoria2Cont++;
      Acum2+=importe;
      break;
      case 3:
			importe = 2500+adporantiguedad;
      Categoria3Cont++;
      Acum3+=importe;
      break;
    }

    TotalSueldos+=importe;
	  //	cuantossueldos++;
    if(bandera==1)
    {
      SueldoMaximo=importe;
      strcpy(nombreSueldoMaximo,nombre);
      bandera=0;
    }
    if(SueldoMaximo<importe)
    {
      SueldoMaximo=importe;
    }
  }
  PorcentajeCategoria1=(Acum1*100/TotalSueldos);
  PorcentajeCategoria2=(Acum2*100/TotalSueldos);
  PorcentajeCategoria3=(Acum3*100/TotalSueldos);

  printf("\nen la categoria 1 hay: %d",Categoria1Cont);
  printf("\nen la categoria 2 hay: %d",Categoria2Cont);
  printf("\nen la categoria 3 hay: %d",Categoria3Cont);

  printf("\nEl total de sueldo de la categoria 1 es: %.2f",Acum1);
  printf("\nEl total de sueldo de la categoria 2 es: %.2f",Acum2);
  printf("\nEl total de sueldo de la categoria 3 es: %.2f",Acum3);

  printf("\nEl promedio de sueldos es: %.2f",(float)TotalSueldos/cantidaem);

  printf("\nEl sueldo maximo es de %.2f y pertenece a: %s ",SueldoMaximo,nombreSueldoMaximo);

  printf("\nEl porcentaje de la categoria 1  es: %.2f",PorcentajeCategoria1);
  printf("\nEl porcentaje de la categoria 2  es: %.2f",PorcentajeCategoria2);
  printf("\nEl porcentaje de la categoria 3  es: %.2f",PorcentajeCategoria3);
  system("pause");
  return 0;
}