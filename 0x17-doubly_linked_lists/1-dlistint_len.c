#include "lists.h"

/**
 * dlistint_len - returns the n of elements in a dlinked list
 * @h: head of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
    int i;

    for (i = 0; h != NULL; i++)
    {
        h = h->next;
    }
    return (i);
}
