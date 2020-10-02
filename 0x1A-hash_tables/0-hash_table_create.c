#include "hash_tables.h"
#define SIZE 1000
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new;

    if (size == 0)
        return (NULL);
    new = malloc(sizeof(hash_table_t));
    if (new == 0)
        return (NULL);
    new->array = malloc(sizeof(hash_node_t *) * size);
    if (new->array == NULL)
    {
        free(new);
        return(NULL);
    }
    new->size = size;
    return (new);
}
