#include "lists.h"

/**
 * list_len - printf the number of elements in a linked list
 *
 * @h: pointer to the start of the list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
if (!h)
return (0);

return (1 + list_len(h->next));
}
