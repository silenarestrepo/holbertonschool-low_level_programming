#include "lists.h"

/**
 * add_node - adds a new node at a beginning of a list
 * @head: double pointer
 * @str: string to be duplicated
 * Return: address of the new element and NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_element;

	if (!str)
		return (NULL);

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);

	for (i = 0; str[i] != NULL; i++)

	new_element->str = strdup(str);
	new_element->len = i;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}
