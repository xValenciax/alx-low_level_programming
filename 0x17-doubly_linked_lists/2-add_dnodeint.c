#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 *
 * @head: head of the list
 * @n: content of the node
 *
 * Return: returns the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;

new = malloc(sizeof(dlistint_t));

if (!new)
return (NULL);

new->n = n;
if (!(*head))
{
(*head) = new;
(*head)->prev = NULL;
(*head)->next = NULL;
}

else
{
(*head)->prev = new;
new->prev = NULL;
new->next = (*head);
(*head) = new;
}
return (*head);
}
