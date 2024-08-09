#include "sort.h"

void selection_sort(int *array, size_t size)
{
    int tmp, i, j, min, n;

    n = size;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            tmp = array[min];
            array[min] = array[i];
            array[i] = tmp;
        }
        print_array(array, size);
    }
}
