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

/**
 * delete_dnodeint_at_index - deletes a dlistint_t node at a specified index
 *
 * @head: head of the dlistint list
 * @index: index of node to be deleted
 *
 * Return: 1 (Success), -1 (otherwise)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *curr = *head;
unsigned int i = 0;
size_t len;

if (!(*head))
return (-1);

len = dlistint_len(curr);
if (len == 0 || index >= len)
return (-1);

if (index == 0 || index == len - 1)
{
if (curr->next)
{
curr->next->prev = NULL;
(*head) = curr->next;
curr->next = NULL;
}
else
(*head) = NULL;
free(curr);
}

else
{
while (curr && i < index)
{
curr = curr->next;
i++;
}
curr->prev->next = curr->next;
curr->next->prev = curr->prev;
curr->next = NULL;
curr->prev = NULL;
free(curr);
}
return (1);
}
