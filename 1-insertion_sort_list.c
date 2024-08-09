#include "sort.h"


/**
* insertion_sort_list - Write a function that sorts
* a doubly linked list of integers in ascending order
* using the Insertion sort algorithm
* @list: list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
    listint_t *current = *list;

	if (list == NULL)
		return;

    while (list)
    {
        if (current->n > current->next->n)
        {
            
        } else
        {
            current = current->next;
        }
    }
}