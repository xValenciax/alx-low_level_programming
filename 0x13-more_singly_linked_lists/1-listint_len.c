#include "lists.h"

/**
 * listint_len - prints the length of a linked list
 *
 * @h: head of the list
 *
 * Return: number of nodes in a list
 */

size_t listint_len(const listint_t *h)
{
int len = 0;

while (h)
{
h = h->next;
len++;
}

return (len);
}
