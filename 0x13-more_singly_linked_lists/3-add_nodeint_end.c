#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a list
 *
 * @head: head of the list
 * @n: value of the new node
 *
 * Return: pointer to the new node (Success), NULL (Failure)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *it;

temp = malloc(sizeof(listint_t));

if (!temp)
return (NULL);

temp->n = n;
temp->next = NULL;
if (!(*head))
*head = temp;

else
{
it = *head;
while (it && it->next)
{
it = it->next;
}
it->next = temp;
}

return (temp);
}
