#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of list
 * @str: string
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;

	list_t *new_element;
	list_t *last_element;

	i = 0;

	if (!str)
		return (NULL);

	new_element = malloc(sizeof(list_t));
	last_element = *head;

	if (new_element == NULL)
		return (NULL);

	while (str[i] != 0)
		i++;

	new_element->str = strdup(str);
	new_element->len = i;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	while (last_element->next != NULL)
		last_element = last_element->next;

	last_element->next = new_element;

	return (new_element);
}
