#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table give a size
 *
 * @size: size of the hash table to be created
 *
 * Return: Address of newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int  i = 0;
hash_table_t *h_table = malloc(sizeof(hash_table_t));
if (!h_table)
return (NULL);

h_table->array = calloc(size, sizeof(hash_node_t *));
if (!h_table->array)
return (NULL);

for (; i < size; i++)
h_table->array[i] = NULL;

h_table->size = size;

return (h_table);
}
