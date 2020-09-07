#include "lists.h"

/**
 * free_dlistint - frees a dlinked list
 * @head: head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
