#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a doubly linked list
 *
 * @head: head of the list
 * @n: content of the node
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *curr = *head, *new = NULL;

new = malloc(sizeof(dlistint_t));

if (!new)
return (NULL);

new->n = n;
if (!(*head))
{
*head = new;
(*head)->prev = NULL;
(*head)->next = NULL;
return (new);
}
else
{
while (curr->next)
{
curr = curr->next;
}

curr->next = new;
new->prev = curr;
new->next = NULL;
curr = new;
return (curr);
}
}
