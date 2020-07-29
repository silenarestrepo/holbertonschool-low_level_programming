#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a list
 * @head: the head of the list
 * Return: a reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_node = NULL;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	while ((*head) != NULL)
	{
		new_node = (*head)->next;
		(*head)->next = old_node;
		old_node = *head;
		*head = new_node;
	}

	*head = old_node;

	return (*head);
}
