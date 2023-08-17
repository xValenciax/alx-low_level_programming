#include "lists.h"

/**
 * sum_dlistint - sums all data of a doubly linked list
 *
 * @head: head of the list
 *
 * Return: returns the sum value
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *curr = head;
int sum = 0;

while (curr)
{
sum += curr->n;
curr = curr->next;
}

return (sum);
}
