#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked lists
 *
 * @h: head of the list
 *
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t no_nodes = 0;

if (!h)
return (0);

while (h)
{
printf("%d\n", h->n);
h = h->next;
no_nodes++;
}
return (no_nodes);
}
