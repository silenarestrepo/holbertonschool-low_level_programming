#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: head of list
 * @n: asd
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *temp_node;

	last_node = malloc(sizeof(dlistint_t));
	temp_node = *head;
	if (temp_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;
	if (temp_node == NULL)
	{
		*head = last_node;
		last_node->prev = NULL;
	}
	if (temp_node != NULL)
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = last_node;
		last_node->prev = temp_node;
	}
	return (last_node);
}
