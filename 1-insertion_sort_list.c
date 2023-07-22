#include "sort.h"


unsigned int list_len(listint_t **list);

/**
 * insertion_sort_list - Sort a doubly linked list
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;
	while(current)
	{
		temp = current;
		while(temp && temp->n < temp->prev->n)
		{
			

		}
		current = current->next;
	}
}
