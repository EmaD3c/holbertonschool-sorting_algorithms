#include "sort.h"

/**
 * lomuto_partition - Partitionne le tableau selon le schéma de Lomuto
 * @array: Le tableau d'entiers à partitionner
 * @start: Indice de début de la partition
 * @end: Indice de fin de la partition (pivot)
 * @size: Taille du tableau
 *
 * Return: L'indice du pivot après partitionnement
 */
int lomuto_partition(int *array, int start, int end, size_t size)
{
	int temp;
	/*Le pivot est choisi comme le dernier élément du tableau*/
	int pivot_value = array[end];
	int j = start;
	int i;

	for (i = start; i < end; i++)
	{
		/*Si l'élément courant est inférieur au pivot*/
		if (array[i] < pivot_value)
		{
			/*si l'indice 'j' est inférieur à'i', on échange les éléments.*/
			if (j < i)
			{
				/*Échange le pivot avec l'élément à l'indice 'j'.*/
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
			j++;
		}
		j++;
	}
	/*Si le pivot n'est pas déjà à sa place correcte*/
	if (j != end)
	{
		temp = array[j];
		array[j] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	/*Retourne l'indice du pivot après partitionnement.*/
	return (j);
}

/**
 * quick_sort_recursive - Fonction récursive pour le tri rapide
 * @array: Le tableau d'entiers à trier
 * @start: Indice de début du sous-tableau
 * @end: Indice de fin du sous-tableau
 * @size: Taille du tableau
 */
void quick_sort_recursive(int *array, int start, int end, size_t size)
{
	int pivot_index;

	if (start < end)
	{
		/*Partitionne le tableau*/
		pivot_index = lomuto_partition(array, start, end, size);
		/*Trie la partie gauche*/
		quick_sort_recursive(array, start, pivot_index - 1, size);
		/*Trie la partie droite*/
		quick_sort_recursive(array, pivot_index + 1, end, size);
	}
}

/**
 * quick_sort - Trie un tableau d'entiers en ordre croissant
 * en utilisant l'algorithme Quick Sort
 * @array: Le tableau d'entiers à trier
 * @size: Taille du tableau
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	/*Appelle la fonction récursive avec les indices de début et de fin*/
	quick_sort_recursive(array, 0, size - 1, size);
}
