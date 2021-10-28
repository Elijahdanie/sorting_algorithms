#include "sort.h"

/**
 * insertion_sort_list - function sorts a doubly linked list of integers
 *
 * @list: listint_t list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp;

	curr = *list;
	curr = curr->next;

	if (!list || !*list || !(*list)->next)
		return;

	while (curr)
	{
		while (curr->prev && curr->n < curr->prev->n)
		{
			tmp = curr;
			if (curr->next)
				curr->next->prev = tmp->prev;
			curr->prev->next = tmp->next;
			curr = curr->prev;
			tmp->prev = curr->prev;
			tmp->next = curr;
			if (curr->prev)
				curr->prev->next = tmp;
			curr->prev = tmp;
			if (!tmp->prev)
				*list = tmp;

			print_list(*list);
			curr = curr->prev;
		}
		curr = curr->next;
	}
}