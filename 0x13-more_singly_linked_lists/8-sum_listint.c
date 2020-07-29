#include "lists.h"

/**
 * sum_listint - sums all data of a list
 * @head: head of the list
 * Return: 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum = 0;

	p = head;

	while (p != NULL)
	{
	sum = sum + p->n;
	p = p->next;
	}
	return (sum);
}
