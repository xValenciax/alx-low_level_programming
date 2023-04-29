#include "lists.h"

/**
 * listint_len - prints the length of a linked list
 *
 * @h: head of the list
 *
 * Return: number of nodes in a list
 */

size_t listint_len(const listint_t *h)
{
int len = 0;

while (h)
{
h = h->next;
len++;
}

return (len);
}

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
unsigned int len = 0, it = 0;

if (!head || !(*head))
return (NULL);

len = listint_len(*head);

if (idx > len)
return (NULL);

if (!idx)
return (add_nodeint(head, n));

new = malloc(sizeof(listint_t));

if (!new)
return (NULL);

temp = *head;
while (temp)
{
temp = temp->next;
it++;

if (it == idx - 1)
{
new->n = n;
new->next = temp->next;
temp->next = new;
}
}

return (new);
}
