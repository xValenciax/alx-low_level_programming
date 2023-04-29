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
