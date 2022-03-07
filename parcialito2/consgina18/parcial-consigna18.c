#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int NroDeCurso,NivelDeIngles,Lugares,CupoMax,Costo=3000,NroDeLeajo,Maxlleno=0,MaxNivel;
int Cursos[7][11];//[niveles] || [cursos]
int contador[7],ingresos=0;
int porcentaje1,porcentaje2,porcentaje3,porcentaje4,porcentaje5,porcentaje6;
int cont1,cont2,cont3,cont4,cont5,cont6;
int rechazos[6];
int maslleno=0;
int random(int min_num, int max_num){ 
        int resultado = 0, bajo_num = 0, alto_num = 0;
        if (min_num < max_num)
        {
            bajo_num = min_num;
            alto_num = max_num + 1; 
        } else {
            bajo_num = max_num + 1; 
            alto_num = min_num;
        }
        srand(time(NULL));
        resultado = (rand() % (alto_num - bajo_num)) + bajo_num;
        return resultado;
}
void comparador(int cursoX,int NroCurso,int NroDeNivel){
    if(cursoX>Maxlleno){
    Maxlleno=cursoX;
    NroDeCurso=NroCurso;
    MaxNivel=NroDeNivel;
    }
}
void CargaDeDatos(){
    printf("ingrese numero de legajo:");scanf("%d",&NroDeLeajo);
    while (NroDeLeajo!=0){
        contador[0]++;
        ingresos+=3000;
        do
        {
        printf("ingrese nivel de ingles al que se va a presentar:");scanf("%d",&NivelDeIngles);
        } while (NivelDeIngles>6 || NivelDeIngles==0);
        
        NivelIngles();
        Curso();
        porcentajes();
        CargaDeDatos();
    }
}
void NivelIngles(){
    int nivel;
    if (NivelDeIngles==1){
        contador[1]++;
    }
    if (NivelDeIngles==2){
        contador[2]++;
    }
    if (NivelDeIngles==3){
        contador[3]++;
    }
    if (NivelDeIngles==4){
        contador[4]++;
    }
    if (NivelDeIngles==5){
        contador[5]++;
    }
    if (NivelDeIngles==6){
        contador[6]++;
    }
    nivel= random(1,6);
    if (NivelDeIngles==1 && NivelDeIngles!=nivel ){
        rechazos[1]++;
    };
    if (NivelDeIngles==2 && NivelDeIngles!=nivel ){
        rechazos[2]++;
    };
    if (NivelDeIngles==3 && NivelDeIngles!=nivel ){
        rechazos[3]++;
    };
    if (NivelDeIngles==4 && NivelDeIngles!=nivel ){
        rechazos[4]++;
    };
    if (NivelDeIngles==5 && NivelDeIngles!=nivel ){
        rechazos[5]++;
    };

    if (NivelDeIngles==6 && NivelDeIngles!=nivel ){
        rechazos[0]++;
    };
    NivelDeIngles=nivel;
    printf("\n usted quedo en el nivel de ingles : %d\n", nivel);
}

void Curso(){
    bool running=true;
        for ( int alumno = 0; alumno < 10; alumno++)
        {
            int fila=1;
            while (running){
                int cantidad=Cursos[NivelDeIngles][fila];
                comparador(Cursos[NivelDeIngles][fila], fila,NivelDeIngles);
                printf("\nva a estar en el nivel %d en el curso %d\n",NivelDeIngles,fila);
                if (cantidad<=10){
                    Cursos[NivelDeIngles][fila]++;
                    running=false;
                }else{
                    fila++;
                }
            }
            
        }
}
void porcentajes(){
    porcentaje1=Cursos[1][1]+Cursos[1][2]+Cursos[1][3]+Cursos[1][4]+Cursos[1][5]+Cursos[1][6]+Cursos[1][7]+Cursos[1][8]+Cursos[1][9]+Cursos[1][10];
    porcentaje2=Cursos[2][1]+Cursos[2][2]+Cursos[2][3]+Cursos[2][4]+Cursos[2][5]+Cursos[2][6]+Cursos[2][7]+Cursos[2][8]+Cursos[2][9]+Cursos[2][10];
    porcentaje3=Cursos[3][1]+Cursos[3][2]+Cursos[3][3]+Cursos[3][4]+Cursos[3][5]+Cursos[3][6]+Cursos[3][7]+Cursos[3][8]+Cursos[3][9]+Cursos[3][10];
    porcentaje4=Cursos[4][1]+Cursos[4][2]+Cursos[4][3]+Cursos[4][4]+Cursos[4][5]+Cursos[4][6]+Cursos[4][7]+Cursos[4][8]+Cursos[4][9]+Cursos[4][10];
    porcentaje5=Cursos[5][1]+Cursos[5][2]+Cursos[5][3]+Cursos[5][4]+Cursos[5][5]+Cursos[5][6]+Cursos[5][7]+Cursos[5][8]+Cursos[5][9]+Cursos[5][10];
    porcentaje6=Cursos[6][1]+Cursos[6][2]+Cursos[6][3]+Cursos[6][4]+Cursos[6][5]+Cursos[6][6]+Cursos[6][7]+Cursos[6][8]+Cursos[6][9]+Cursos[6][10];
}
int main(int argc, char const *argv[]){
    CargaDeDatos();
    printf("\nal nivel de ingles 1 se presentaron %d",contador[1]);
    printf("\nal nivel de ingles 2 se presentaron %d",contador[2]);
    printf("\nal nivel de ingles 3 se presentaron %d",contador[3]);
    printf("\nal nivel de ingles 4 se presentaron %d",contador[4]);
    printf("\nal nivel de ingles 5 se presentaron %d",contador[5]);
    printf("\nal nivel de ingles 6 se presentaron %d",contador[6]);
    printf("\nel porcentaje de capacidad sobre el maximo de los cursos de nivel 1 es de  %d porciento ",porcentaje1);
    printf("\nel porcentaje de capacidad sobre el maximo de los cursos de nivel 2 es de  %d porciento ",porcentaje2);
    printf("\nel porcentaje de capacidad sobre el maximo de los cursos de nivel 3 es de  %d porciento",porcentaje3);
    printf("\nel porcentaje de capacidad sobre el maximo de los cursos de nivel 4 es de  %d porciento ",porcentaje4);
    printf("\nel porcentaje de capacidad sobre el maximo de los cursos de nivel 5 es de  %d porciento",porcentaje5);
    printf("\nel porcentaje de capacidad sobre el maximo de los cursos de nivel 6 es de  %d porciento",porcentaje6);
    printf("\nla recaudacion final es de %d\n",ingresos);
    printf("\nel curso mas lleno es: %d del nivel %d \n",NroDeCurso,MaxNivel);
    printf("\nsolicitudes rechazadas del nivel 1: %d\n",rechazos[1]);
    printf("\nsolicitudes rechazadas del nivel 2: %d\n",rechazos[2]);
    printf("\nsolicitudes rechazadas del nivel 3: %d\n",rechazos[3]);
    printf("\nsolicitudes rechazadas del nivel 4: %d\n",rechazos[4]);
    printf("\nsolicitudes rechazadas del nivel 5: %d\n",rechazos[5]);
    printf("\nsolicitudes rechazadas del nivel 6: %d\n",rechazos[0]);
    system("pause");
    return 0;
}
