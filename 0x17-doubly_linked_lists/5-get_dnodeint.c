#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a specific index
 *
 * @head: head of the list
 * @index: index to retrieve element at
 *
 * Return: address of found element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *curr = head;
unsigned int i = 1;

while (curr && i <= index)
{
curr = curr->next;
i++;
}

return (curr);
}
