#include "lists.h"

/**
 * free_listint2 - frees a list when function sets head to NULL
 * @head: head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	while (head != NULL)

	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	head = NULL;
}
