#include "hash_tables.h"
#define SIZE 1000
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_ht;

if (size == 0)
return (NULL);
new_ht = malloc(sizeof(hash_table_t));
if (new_ht == 0)
return (NULL);
new_ht->array = malloc(sizeof(hash_node_t *) * size);
if (new_ht->array == NULL)
{
free(new_ht);
return (NULL);
}
new_ht->size = size;
return (new_ht);
}
