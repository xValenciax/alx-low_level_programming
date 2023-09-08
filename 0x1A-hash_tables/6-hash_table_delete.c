#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table from memory
 *
 * @ht: hash table to be deleted
 *
 * Return: always void
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *node = NULL, *curr = NULL, *tmp = NULL;

if (!ht)
return;

for (; i < ht->size; i++)
{
if (ht->array[i])
{
node = ht->array[i];
curr = node->next;
free(node->key);
free(node->value);
while (curr)
{
tmp = curr;
free(tmp->key);
free(tmp->value);
free(tmp);
curr = curr->next;
}
free(node);
}
}
free(ht->array);
free(ht);
}
