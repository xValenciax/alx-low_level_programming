#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of a list
 *
 * @head: head of the list
 * @n: value of the new node to be added
 *
 * Return: pointer to the new node (Success), Null(Failure)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;

temp = malloc(sizeof(listint_t));

if (!temp)
return (NULL);

temp->n = n;
temp->next = *head;

*head = temp;

return (temp);
}

/**
 * insert_nodeint_at_index - inserts a new node at given position
 *
 * @head: head of the list
 * @idx: position to insert node at
 * @n: value of the node to be inserted
 *
 * Return: address of the new node (Success), NULL (Failure)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *new;
unsigned int it = 0;

if (!head || !(*head))
return (NULL);

new = malloc(sizeof(listint_t));

if (!new)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;
}

temp = *head;
while (temp && it < idx)
{
temp = temp->next;
it++;

if (it == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
}

return (NULL);
}
