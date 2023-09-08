#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int index = 0;
  hash_node_t *curr = NULL;

  if (!key || !(*key) || !ht)
    return (NULL);

  index = key_index((unsigned char *)key, ht->size);

  curr = ht->array[index];
  if (curr && strcmp(curr->key, key))
    return (curr->value);

  while (curr && strcmp(curr->key, key))
    curr = curr->next;

  if (!curr)
    return (NULL);

  return (curr->value);
}
