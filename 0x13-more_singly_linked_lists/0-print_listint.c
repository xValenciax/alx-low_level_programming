#include "lists.h"

/**
 * print_listint - printf all the elements of a list
 *
 * @h: head of the list
 *
 * Return: number of elements in a list
 */

size_t print_listint(const listint_t *h)
{
if (!h)
return (0);

printf("%d\n", h->n);

return (1 + print_listint(h->next));
}
