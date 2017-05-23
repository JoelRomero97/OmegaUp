#include <stdio.h>
#include <stdlib.h>

int * IngresarChapas (int * chapas, int numeroChapas);
int * IngresarLlaves (int * llaves, int numeroLlaves);
int LlaveExistente (int * llaves, int llave, int x);

////////////////////////////////////////////////////////////////////////////////////////
////									Alicia.c 									////
////																				////
////																				////
//// Alicia se queda atrapada dentro de un hoyo oscuro con muchas puertas y muchas 	////
//// llaves, cada llave de cierto tamaño abre solamente 1 chapa de ese mismo tamaño	////
//// además, las chapas están ordenadas de menor a mayor y ambas (chapas y puertas) ////
//// deben estar entre 1 y 100,000. Se muestra que puerta abre cierta llave.		////
////																				////
////																				////
//// Autor: Romero Gamarra Joel Mauricio											////
////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char const *argv[])
{
	int numeroChapas, numeroLlaves, * llaves, * chapas;
	system ("cls");
	/*PEDIMOS LAS CHAPAS*/
	printf ("Ingrese el numero de chapas:\t");
	scanf ("%d", &numeroChapas);
	chapas = (int *) malloc (sizeof (int) * numeroChapas);
	if ((numeroChapas > 0) && (numeroChapas < 100001))
		chapas = IngresarChapas (chapas, numeroChapas);
	else
	{
		printf ("Error, el numero de chapas debe ser mayor a cero y menor o igual a 100,000.\n");
		return 0;
	}
	/*PEDIMOS LAS LLAVES*/
	printf ("\n\n\nIngrese el numero de llaves:\t");
	scanf ("%d", &numeroLlaves);
	llaves = (int *) malloc (sizeof (int) * numeroLlaves);
	if ((numeroLlaves > 0) && (numeroLlaves < 100001))
		llaves = IngresarLlaves (llaves, numeroLlaves);
	else
	{
		printf ("Error, el numero de llaves debe ser mayor a cero y menor o igual a 100,000.\n");
		return 0;
	}
	return 0;
}

int * IngresarChapas (int * chapas, int numeroChapas)
{
	int i;
	//chapas = (int *) malloc (sizeof (int) * numeroChapas);
	for (i = 0; i < numeroChapas; i ++)
	{
		printf ("Ingrese el tamanio de la chapa %d\n", i+1);
		scanf ("%d", &chapas[i]);
		if ((chapas [i] < chapas [i - 1]) && (i > 0) && (chapas [i] > 0))
		{
			printf("Error, las chapas deben ingresarse de la mas chica a la mas grande\n");
			exit (0);
		}else if ((chapas [i] <= 0) || (chapas [i] > 100000))
		{
			printf("Error, no puede existir un tamanio de chapa menor o igual a cero ni mayor a 100,000.\n");
			exit (0);
		}
	}
	return chapas;
}

int * IngresarLlaves (int * llaves, int numeroLlaves)
{
	int i;
	//llaves = (int *) malloc (sizeof (int) * numeroLlaves);
	for (i = 0; i < numeroLlaves; i ++)
	{
		printf ("Ingrese la llave %d\n", i+1);
		scanf ("%d", &llaves [i]);
		if ((llaves [i] <= 0) || (llaves [i] > 100000))
		{
			printf ("Error, no puede existir un tamanio de llave menor o igual a cero ni mayor a 100,000.\n");
			exit (0);
		}else if (LlaveExistente (llaves, llaves[i], i))
		{
			printf ("Error, la llave ingresada '%d' ya existe.\n", llaves[i]);
			exit (0);
		}
	}
	return llaves;
}

int LlaveExistente (int * llaves, int llave, int x)
{
	int * pt = llaves, resp = 0, n = 0;
	while (n < x)
	{
		if (llave == *pt)
		{
			resp = 1;
			break;
		}
		pt ++;
		n ++;
	}
	return resp;
}