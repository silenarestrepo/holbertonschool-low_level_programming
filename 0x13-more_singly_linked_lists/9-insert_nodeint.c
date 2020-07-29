#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @idx: index of the list where the node should be added
 * @n: position number
 * Return: the address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	node = head;

	int idx = 0;

	while (idx < n - 1)
	{
		node = *head->next;
		idx++;
	}
	p->next = *head->next;
	node->next = p;
	return (node);
}
