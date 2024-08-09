#include "sort.h"

/**
 * bubble_sort - Trie un tableau d'entiers en ordre croissant
 *                en utilisant l'algorithme de tri à bulles.
 * @array: Tableau d'entiers à trier.
 * @size: Taille du tableau.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	/* Si le tableau est NULL ou de taille inférieure à 2, ne rien faire */
	if (array == NULL || size < 2)
		return;

	/* Boucle à travers chaque élément du tableau */
	for (i = 0; i < size - 1; i++)
	{
		/* Compare les éléments adjacents et les échange si nécessaire */
		for (j = 0; j < size - i - 1; j++)
		{
			/* Si l'élément actuel est plus grand que le suivant, échangez-les */
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

				/* Imprime le tableau après chaque échange */
				print_array(array, size);
			}
		}
	}
}
X