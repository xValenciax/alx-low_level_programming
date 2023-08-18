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
 * insert_dnodeint_at_index - inserts a node at specific index in a dlistint
 *
 * @h: head of the list
 * @idx: index to insert at
 * @n: content of the node to be inserted
 *
 * Return: Address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *curr = *h, *new = NULL;
size_t len = dlistint_len(*h);
unsigned int i = 0;

if (idx > len)
return (NULL);

if (!(*h) || idx == 0)
new = add_dnodeint(h, n);

else if (idx == len)
new = add_dnodeint_end(h, n);

else
{
new = malloc(sizeof(dlistint_t));

new->n = n;

while (curr && i < idx)
{
curr = curr->next;
i++;
}

curr->prev->next = new;
new->next = curr;
new->prev = curr->prev;
curr->prev = new;
}
return (new);
}
