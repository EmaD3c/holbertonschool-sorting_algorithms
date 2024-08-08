#include "sort.h"

void selection_sort(int *array, size_t size)
{
    int tmp, i, j, min, n;

    n = size;

    for (i = 0; i < n - 1; i++)
    {
        min = array[i];
        for (j = 0; j < n - 1 - i; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
            }
        }
        if (min != array[i])
        {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }

        print_array(array, size);

    }

}