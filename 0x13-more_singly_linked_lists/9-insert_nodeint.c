#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer
 * @idx: index
 * @n: position number
 * Return: the address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a;
	listint_t *b;
	unsigned int c = 0;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;

	if (idx == 0)
	{
		a->next = *head;
		*head = a;

		return (*head);
	}
	b = *head;
	while (b != NULL)
	{
		while (c == idx - 1)
		{
			a->next = b->next;
			b->next = a;

	return (a);
		}
		c++;
		b = b->next;
	}
	return (NULL);
}
