#include "sort.h"

/**
 * insertion_sort_list - Tri d'une liste doublement chaînée d'entiers
 * en ordre croissant en utilisant l'algorithme de tri par insertion.
 * @list: Pointeur vers le pointeur de la tête de la liste.
 */
void insertion_sort_list(listint_t **list)
{
  listint_t *current, *temp;

  if (list == NULL || *list == NULL)
  {
    return;
  }

  /* Commence au deuxième élément */
  current = (*list)->next;

  while (current != NULL)
  {
    temp = current->prev;

    while (temp != NULL && current->n < temp->n)
    {
      /* Détacher current de sa position actuelle */
      if (current->next != NULL)
      {
        current->next->prev = current->prev;
      }

      current->prev->next = current->next;

      /* Insérer current avant temp */
      current->prev = temp->prev;
      current->next = temp;

      if (temp->prev != NULL)
      {
        temp->prev->next = current;
      }

      else
      {
        *list = current; /*Mise à jour de la tête si nécessaire*/
      }

      temp->prev = current;

      /* Mise à jour de temp pour continuer à comparer */
      temp = current->prev;

      print_list(*list);
    }
    current = current->next;
  }
}
