#include "sort.h"
/**
* selection_sort - Write a function that sorts
* an array of integers in ascending order using
* the Selection sort algorithm
* @array: array to sort
* @size: taille du tableau
*/
void selection_sort(int *array, size_t size)
{
	int tmp, i, j, min, n, swap;

	n = size;

	for (i = 0; i < n - 1; i++)
	{
		swap = 0;
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[j] < array[min]) /*check valeur*/
			{
				min = j;
			}
		}
		if (min != i)
		{
			tmp = array[i]; /* echange valeur*/
			array[i] = array[min];
			array[min] = tmp;
			swap++;
		}
		if (swap == 1)
		{
			print_array(array, size);
		}
	}
}
