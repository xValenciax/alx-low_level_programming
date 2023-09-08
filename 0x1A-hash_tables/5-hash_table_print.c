#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table content
 *
 * @ht: hash table to print
 *
 * Return: always void
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned int i = 0;
hash_node_t *curr = NULL;
char *comma = "";

if (!ht)
return;

printf("{");
for (; i < ht->size; i++)
{
curr = ht->array[i];
while (curr)
{
printf("%s'%s': '%s'", comma, curr->key, curr->value);
comma = ", ";
curr = curr->next;
}
}
printf("}\n");
}
