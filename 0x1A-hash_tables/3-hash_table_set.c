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

if (!key || strcmp(key, "") == 0 || !ht)
return (0);

index = key_index((unsigned char *)key, ht->size);

if (ht->array[index] == NULL)
{
ht->array[index] = malloc(sizeof(hash_node_t *));
ht->array[index]->key = malloc(strlen(key) + 1);
strcpy(ht->array[index]->key, key);
ht->array[index]->value = malloc(strlen(value) + 1);
strcpy(ht->array[index]->value, value);
ht->array[index]->next = NULL;
}
else
{
hash_node_t *head = ht->array[index];
hash_node_t *node = malloc(sizeof(hash_node_t *));

node->key = malloc(strlen(key) + 1);
strcpy(node->key, key);
node->value = malloc(strlen(value) + 1);
strcpy(node->value, value);

node->next = head->next;
head->next = node;
}

return (1);
}
