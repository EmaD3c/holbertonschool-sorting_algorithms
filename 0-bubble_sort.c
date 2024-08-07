#include "sort.h"
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
	}
}
