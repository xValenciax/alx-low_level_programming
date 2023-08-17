#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 *
 * @head: head of the list
 *
 * Return: always void
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *curr = head, *tmp = NULL;

while (curr)
{
tmp = curr;
curr = curr->next;
free(tmp);
}
}
