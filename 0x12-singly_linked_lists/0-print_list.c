#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: pointer to the start of a list
 *
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
if (!h)
return (0);

if (!h->str)
printf("[0] (nil)\n");

else
printf("[%u] %s\n", h->len, h->str);

return (1 +  print_list(h->next));
}
