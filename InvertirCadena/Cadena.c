#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////
////									Cadena.c 									////
////																				////
////																				////
//// Inversión de una cadena utilizando apuntadores y un caracter auxiliar.			////
////																				////
////																				////
//// Autor: Romero Gamarra Joel Mauricio											////
////////////////////////////////////////////////////////////////////////////////////////

int main ()
{
	char aux, *final, *inicio, *cadena = (char *) malloc (sizeof (char *));
	printf("\n\nIngrese una cadena para invertrirla:\t");
	scanf ("%s", cadena);
	inicio = cadena;
	final = cadena;
	for(;*final!='\0';final++);
	final--;
	for(;inicio<=final;inicio++)
	{
		aux=*inicio;
		*inicio=*final;
		*final=aux;
		final--;
	}
	printf("\n\nCadena invertida:\t%s\n\n", cadena);
	return 0;
}