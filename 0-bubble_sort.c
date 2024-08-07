#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * print_array - Imprime un tableau d'entiers
 * @array: Le tableau à imprimer
 * @size: Le nombre d'éléments dans le tableau
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * bubble_sort - Trie un tableau d'entiers
 * en ordre croissant en utilisant le tri à bulles
 * @array: Le tableau à trier
 * @size: La taille du tableau
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	/* Boucle à travers chaque élément du tableau */
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		/* Effectue la boucle interne pour comparer les éléments adjacents */
		for (j = 0; j < size - i - 1; j++)
		{
			/* Si l'élément actuel est plus grand que le suivant, échangez-les */
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;

				/* Imprime le tableau après chaque échange */
				print_array(array, size);
			}
		}

		/* Si aucun élément n'a été échangé alors le tableau est trié */
		if (!swapped)
			break;
	}
}
