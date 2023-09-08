#include "hash_tables.h"

/**
 * hash_table_set - adds a new element to the hash table
 *
 * @ht: hash table to add to
 * @key: key of the added element
 * @value: value of the added element
 *
 * Return: 1 (Success), 0 (Failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
hash_node_t *curr = NULL, *node = NULL;

if (!key || !(*key) || !ht)
return (0);

index = key_index((unsigned char *)key, ht->size);
curr = ht->array[index];

while (curr && strcmp(curr->key, key))
curr = curr->next;
if (curr)
{
free(curr->value);
curr->value = strdup(value);
return (1);
}

node = malloc(sizeof(hash_node_t *));
if (!node)
return (0);

node->key = strdup(key);
node->value = strdup(value);
node->next = ht->array[index];
ht->array[index] = node;

return (1);
}
