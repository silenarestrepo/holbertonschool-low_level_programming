#include "lists.h"

/**
 * free_list - frees the structure
 * @head: the head of the structure
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
