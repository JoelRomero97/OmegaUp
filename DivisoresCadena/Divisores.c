#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////
////								Divisores.c 									////
////																				////
////																				////
//// Se ingresa una cadena sin importar si es mayuscula o minuscula, y después se 	////
//// toma su valor ASCII de la suma de el valor ASCII de cada caracter ingresado,	////
//// posteriormente, del valor ASCII total de la cadena, se calcula el numero de 	////
//// divisores que contiene la misma.												////
////																				////
////																				////
//// Autor: Romero Gamarra Joel Mauricio											////
////////////////////////////////////////////////////////////////////////////////////////

int main ()
{
	int x = 0, i, divisores = 0;
	char * cadena = (char *) malloc (sizeof (char *));
	printf("\n\nIngresa una cadena para saber cuantos divisores tiene:\t");
	scanf ("%s", cadena);
	char * pt = cadena;
	for (; *pt != '\0'; pt ++)
	{
		if ((*pt >= 65 && *pt <= 90) || (*pt >= 97 && *pt <= 122))
		{
			if (*pt >= 97 && *pt <= 122)
			{
				*pt -= 32;
			}
			x += *pt;
		}else
		{
			return 0;
		}
	}
	printf("\n\nValor de la cadena ingresada en ASCII:%d\t", x);
	for (i = 1; i <= x; i ++)
	{
		if (x%i == 0)
			divisores++;
	}
	printf("\n\nLa cadena tiene %d divisores.\n", divisores);
	return 0;
}