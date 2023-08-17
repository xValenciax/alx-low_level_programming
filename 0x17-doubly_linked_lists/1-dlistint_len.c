#include "lists.h"

/**
 * dlistint_len - returns the length of a dlistint
 *
 * @h: head of the list
 *
 * Return: Length of list h
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;

while (h)
{
len++;
h = h->next;
}

return (len);
}
