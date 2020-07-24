#include "lists.h"

/**
 * list_t - frees a list
 * @head: head of the list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
