#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: index of the node
 * Return: nth node of a list and NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int i = 0;

	while (p != NULL)
	{
		if (i == index)
			return (head);
		i++;
		p = p->next;
		head = p;
	}
	return (0);
}
