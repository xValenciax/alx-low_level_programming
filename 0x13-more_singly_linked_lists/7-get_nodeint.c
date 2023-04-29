#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a list
 *
 * @head: head of the list
 * @index: index of the node
 *
 * Return: pointer to the node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *it;
unsigned int i = 0;

if (!head)
return (NULL);

it = head;

while (it)
{
if (i == index)
return (it);
it = it->next;
i++;
}
return (NULL);
}
