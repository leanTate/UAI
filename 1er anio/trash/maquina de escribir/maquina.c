#include <stdio.h>  

#include <stdlib.h>

#include <Windows.h> // API del Sistema Operativo de Windows (Permite trabajar sobre la Consola).



void Color(int Background, int Text); // Prototipo de función  

enum Colors { // Listado de colores (La letra "L" al inicio, indica que es un color más claro que su antecesor).

 BLACK = 0,

 BLUE = 1,

 GREEN = 2,

 CYAN = 3,

 RED = 4,

 MAGENTA = 5,

 BROWN = 6,

 LGREY = 7,

 DGREY = 8,

 LBLUE = 9,

 LGREEN = 10,

 LCYAN = 11,

 LRED = 12,

 LMAGENTA = 13,

 YELLOW = 14,

 WHITE = 15

};



 void gotoxy(int x,int y){  

   HANDLE hcon;  

   hcon = GetStdHandle(STD_OUTPUT_HANDLE);  

   COORD dwPos;  

   dwPos.X = x;  

   dwPos.Y= y;  

   SetConsoleCursorPosition(hcon,dwPos);  

 }  

 

 void Color(int Background, int Text)

 { // Función para cambiar el color del fondo y/o pantalla



 HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE); // Tomamos la consola.



 // Para cambiar el color, se utilizan números desde el 0 hasta el 255.

 // Pero, para convertir los colores a un valor adecuado, se realiza el siguiente cálculo.

 int  New_Color= Text + (Background * 16);



 SetConsoleTextAttribute(Console, New_Color); // Guardamos los cambios en la Consola.



}

 int main()

 {  

 	int f=0, c=0;

 	char bloque=178;

 	system("color 04");

 	f++;f++;f++;f++;f++;f++;c++;

 	gotoxy(c,f);

 	printf("%c",bloque);

 	

 	

 	c++;c++;gotoxy(c,f);
 	printf("%c",bloque);

 	f++;gotoxy(c,f);
 	printf("%c",bloque);

 	c--;c--;gotoxy(c,f);	
	printf("%c",bloque);

  f++;gotoxy(c,f);	
	printf("%c",bloque);

	c++;gotoxy(c,f);	
	printf("%c",bloque);

	c++;gotoxy(c,f);	
	printf("%c",bloque);

	f++;gotoxy(c,f);	
	printf("%c",bloque);

	c--;c--;gotoxy(c,f);	
	printf("%c",bloque);

	
	f++;gotoxy(c,f);	
	printf("%c",bloque);

	c++;c++;gotoxy(c,f);	
	printf("%c",bloque);

//O
 	f--;f--;f--;f--;c++;;c++;;c++;

 	gotoxy(c,f);
	Color(BLACK,BLUE);
 	printf("%c",bloque);

	c++;gotoxy(c,f);
	Color(BLACK,BLUE);
    printf("%c",bloque);

	c++;gotoxy(c,f);
	Color(BLACK,BLUE);
    printf("%c",bloque);

	f++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);
	
	c--;c--;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	f++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	c++;c++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	f++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	c--;c--;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	f++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	c++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	c++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

//L

f--;f--;f--;f--;c++;;c++;;c++;

 	gotoxy(c,f);
	Color(BLACK,RED);
 	printf("%c",bloque);

	++f;gotoxy(c,f);
	Color(BLACK,RED);
 	printf("%c",bloque);

	++f;gotoxy(c,f);
	Color(BLACK,RED);
 	printf("%c",bloque);

	++f;gotoxy(c,f);
	Color(BLACK,RED);
 	printf("%c",bloque);

	++f;gotoxy(c,f);
	Color(BLACK,RED);
 	printf("%c",bloque);
     
	++c;gotoxy(c,f);
	Color(BLACK,RED);
 	printf("%c",bloque);

	++c;gotoxy(c,f);
	Color(BLACK,RED);
 	printf("%c",bloque);

//A
	f--;f--;f--;f--;c++;;c++;;c++;

 	gotoxy(c,f);
	Color(BLACK,BLUE);
 	printf("%c",bloque);

	c++;gotoxy(c,f);
	Color(BLACK,BLUE);
    printf("%c",bloque);

	c++;gotoxy(c,f);
	Color(BLACK,BLUE);
    printf("%c",bloque);

	f++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);
	
	c--;c--;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	f++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	c++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);
	
	c++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	f++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	c--;c--;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	f++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);

	c++;c++;gotoxy(c,f);
	Color(BLACK,BLUE);
	printf("%c",bloque);
	








    getchar();
	return 0;  

 } 
