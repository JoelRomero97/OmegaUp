#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
////									Tablilla.c 									////
////																				////
////																				////
//// Mostramos un 1 si la tablilla de lapizuli (3 primeros numeros) cabe dentro del	////
//// cofre (3 ultimos numeros), los mismos, son separados por comas, y se calcula	////
//// el volumen dependiendo las dimensiones.										////
////																				////
////																				////
//// Autor: Romero Gamarra Joel Mauricio											////
////////////////////////////////////////////////////////////////////////////////////////

int main ()
{
	int a,b,c,x,y,z, tab, cof;
	printf("Ingrese las medidas separadas por comas:\t");
	scanf ("%d,%d,%d,%d,%d,%d,%d", &a, &b, &c, &x, &y, &z);
	if ((a*b*c) <= (x*y*z))
		printf ("1\n");
	else
		printf ("0\n");
	return 0;
}