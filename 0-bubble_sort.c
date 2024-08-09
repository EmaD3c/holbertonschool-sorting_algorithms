#include "sort.h"
<<<<<<< HEAD

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
=======
/**
* bubble_sort - Write a function that sorts an array
* of integers in ascending order using the Bubble sort algorithm
* @array: array to sort
* @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size <= 1)
	{
		return;
	}

	for  (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
		print_array(array, size);
>>>>>>> Mariama
	}
}
