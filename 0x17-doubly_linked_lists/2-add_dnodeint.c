#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlinked list
 * @n: integer
 * @head: pointer
 * Return: the address of the new element, or NULL if fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp_node;

	new_node = malloc(sizeof(dlistint_t));
	temp_node = *head;

	if (new_node == NULL)
		return (NULL);

	*head = new_node;
	new_node->n = n;
	new_node->prev = NULL;

	if (temp_node == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = temp_node;
		temp_node->prev = *head;
	}
	*head = new_node;
	return (new_node);
}
