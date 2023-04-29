#include "lists.h"

/**
 * sum_listint - return the sum of all elements in a list
 *
 * @head: head of the list
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
listint_t *it;
int sum = 0;

if (!head)
return (0);

it = head;

while (it)
{
sum += it->n;

it = it->next;
}

return (sum);
}
