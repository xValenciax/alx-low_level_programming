#include "hash_tables.h"

/**
 * key_index - returns the index in which the key value pair
 * should be stored in the hash table
 *
 * @size: size of hash table
 * @key: key of the key value pair
 *
 * Return: the index of hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash = hash_djb2(key);

return (hash % size);
}
