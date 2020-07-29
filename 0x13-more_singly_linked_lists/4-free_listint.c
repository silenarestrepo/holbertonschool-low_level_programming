#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
