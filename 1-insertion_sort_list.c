#include "sort.h"

/**
 * insertion_sort_list - Sort a doubly linked list
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *prev_node;

	if (!list)
		return;

	ptr = (*list)->next;

	while (ptr)
	{
		prev_node = ptr->prev;
		while (prev_node && prev_node->n > ptr->n)
		{
			prev_node->next = ptr->next;
			if (ptr->next)
				ptr->next->prev = prev_node;
			ptr->prev = prev_node->prev;
			if (prev_node->prev)
				prev_node->prev->next = ptr;
			else
				*list = ptr;
			prev_node->prev = ptr;
			ptr->next = prev_node;
			prev_node = ptr->prev;
			print_list(*list);
		}
		ptr = ptr->next;
	}
}
