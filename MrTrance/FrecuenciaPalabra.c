#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////
////								FrecuenciaPalabra.c 							////
////																				////
////																				////
//// Se recibe una palabra (verbo), y después se recibe una cadena, en donde se 	////
//// busca el verbo ingresado y se imprime la frecuencia con la que ese verbo 		////
//// aparece en la cadena ingresada. 												////
////																				////
////																				////
//// Autor: Romero Gamarra Joel Mauricio											////
////////////////////////////////////////////////////////////////////////////////////////

int main ()
{
	int frecuencia = 0;
	char * cadena = (char *) malloc (sizeof (char));
	char * palabra = (char *) malloc (sizeof (char));
	printf("Ingresa la palabra:\t");
	scanf("%s",palabra);
	char *ptPalabra = palabra;
	for(; *ptPalabra != '\0'; ptPalabra ++); ptPalabra--;
	if (*ptPalabra == 'r')
	{
		ptPalabra --;
		if (*ptPalabra == 'a' || *ptPalabra == 'e' || *ptPalabra == 'i')
		{
			fflush (stdin);
			printf("Ingresa la cadena:\t");
			gets(cadena);
			char *ptCadena;
		for (ptCadena = cadena; *ptCadena != '\0'; ptCadena ++)
		{
			if (*ptCadena == 32)
			{
				ptPalabra = palabra;
			}else
			{
				if (*ptPalabra == *ptCadena)
				{
					ptPalabra ++;
				}
				if (*ptPalabra == '\0')
				{
					ptPalabra = palabra;
					frecuencia ++;
				}
			}
		}
		printf("\n\nFrecuencia:\t%d\n", frecuencia);
	}else
	{
		return 0;
	}
	return 0;
	}
}