#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head of the list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (head == NULL && (*head == NULL))
		return (0);

	p = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = p;

	return (i);
}
