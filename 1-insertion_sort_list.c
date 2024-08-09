#include "sort.h"


/**
* insertion_sort_list - Write a function that sorts
* a doubly linked list of integers in ascending order
* using the Insertion sort algorithm
* @list: list to sort
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *node = *list;
    int i;

	if (list == NULL)
		return;


        if (node->n > node->next->n)
        {
            node->prev = node->next;
            node->next = node->next->next;
            node->next->prev = node->prev;
            node->next->next = node;
            node = node->next;

        } else
        {
            node = node->next;
        }
        print_list(*list);
        i++;
}