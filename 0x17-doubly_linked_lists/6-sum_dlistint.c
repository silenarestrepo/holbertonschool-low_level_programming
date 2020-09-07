#include "lists.h"

/**
 * sum_dlistint -  sums all the data n of a dlinked list
 * @head: head of the list
 * Return: the sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
